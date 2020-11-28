SHELL=/bin/bash

.ONESHELL:

UNAME_S := $(shell uname -s)

export SPELL_NAME=math

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
	${CHAOS_COMPILER} -shared -fPIC ${SPELL_NAME}.c -o ${SPELL_NAME}.so -lm

build-macos:
	${CHAOS_COMPILER} -shared -fPIC -undefined dynamic_lookup ${SPELL_NAME}.c -o ${SPELL_NAME}.dylib -lm

spell:
	mkdir -p spells/${SPELL_NAME}
	export GLOBIGNORE='*.c'
	cp ${SPELL_NAME}.* spells/${SPELL_NAME}/

test: spell
	./test.sh

test-compiler: spell
	./test.sh compile

memcheck: spell
	valgrind --tool=memcheck --leak-check=full --show-reachable=yes --num-callers=20 --track-fds=yes --track-origins=yes --error-exitcode=1 chaos test.kaos || exit 1

memcheck-compiler: spell
	valgrind --tool=memcheck --leak-check=full --show-reachable=yes --num-callers=20 --track-fds=yes --track-origins=yes --error-exitcode=1 chaos -c test.kaos || exit 1
	valgrind --tool=memcheck --leak-check=full --show-reachable=yes --num-callers=20 --track-fds=yes --track-origins=yes --error-exitcode=1 build/main || exit 1

requirements:
	git clone https://github.com/chaos-lang/chaos.git .chaos/ && \
	cd .chaos/ && \
	make requirements && \
	rm -rf .chaos/
