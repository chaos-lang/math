# Template for Chaos C Extension Developers

Fork this repository to create Chaos C extensions.

To develop a Chaos C extension, first you need to have `gcc` or `clang` and Chaos headers.
To have these requirements, run:

```
make requirements
```

At bare minimum, your C extension should be able to build using `gcc` with:

```
make
```

and for `clang`:

```
make clang
```

Your package name have to match with dynamic library name, e.g. if the package name is `template`
then it must be `template(.so|.dylib|.dll)` and the `name` field in `occultist.json` have to be `template` too.

This template provides the necessary `make` commands, an example C code and everything required to
being compiled by `occultist` with proper file extensions on the target platform.

This repository also provies the example GitHub workflows to automate the testing and memory leak checks for your extension.

## Useful Links

[**Developing Chaos C Extensions**](https://chaos-lang.org/docs/16_chaos_c_extensions_development)

[**API Reference**](https://chaos-lang.org/docs/api)
