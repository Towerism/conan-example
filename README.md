# Conan Example

> C++ Dependency Management

## Build

If you've never used conan before, install it with your favorite package
manager, and run the following:

``` bash
$ conan profile new default --detect
$ conan profile update settings.compiler.libcxx=libstdc++11 default
```

Create the build tree, and install dependencies:

```bash
$ mkdir build && cd build
$ conan install ..
```

Build with cmake:

```bash
$ cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
$ cmake --build .
```


## Run

From within the build tree:

```bash
$ ./bin/md5
```
