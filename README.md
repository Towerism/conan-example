# Conan Example

> C++ Dependency Management

## Build

If you've never used conan before, install it with your favorite package
manager, and run the following:

``` bash
$ conan profile new default --detect
$ conan profile update settings.compiler.libcxx=libstdc++11 default
```

NOTE: If you are using an old compiler, the second command is unnecessary and
probably even counter-productive

Run make from the project root:

```bash
$ make
```

## Run

The resulting `md5` executable will be found in the `build/bin` directory:

```bash
$ ./build/bin/md5
```

## Test

Run the tests:

```bash
$ make test
```

## What's up with the compile_commands.json file?

The `compile_commands.json` file is a symlink to a file with the same name that
is generated in the build tree. It is useful to have it in the project root
when you are using an editor that utilizes a c++ language server such as clangd
to integrate language features into your editor such as auto complete, go to
definition, find all references, etc. The `compile_commands.json` file tells
clang how the whole project is built so that it can provide proper auto
completion and linting.
