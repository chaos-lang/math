SHELL=/bin/bash

.ONESHELL:

UNAME_S := $(shell uname -s)

default:
	export CHAOS_COMPILER=gcc
	${MAKE} build

clang:
	export CHAOS_COMPILER=clang
	${MAKE} build

build:
ifeq ($(UNAME_S), Darwin)
	${MAKE} build-macos
else
	${MAKE} build-linux
endif

build-linux:
	${CHAOS_COMPILER} -shared -fPIC math.c -o math.so -lm

build-macos:
	${CHAOS_COMPILER} -shared -fPIC -undefined dynamic_lookup math.c -o math.dylib -lm

spell:
	mkdir -p spells/math
	export GLOBIGNORE='*.c'
	cp math.* spells/math/

test: spell
	./test.sh

memcheck: spell
	valgrind --tool=memcheck --leak-check=full --show-reachable=yes --num-callers=20 --track-fds=yes --track-origins=yes --error-exitcode=1 chaos test.kaos || exit 1

requirements:
	git clone https://github.com/chaos-lang/chaos.git .chaos/ && \
	cd .chaos/ && \
	make requirements && \
	make requirements-dev && \
	rm -rf .chaos/
