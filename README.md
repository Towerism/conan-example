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
