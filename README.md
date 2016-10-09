# robwork-project

A template for a CMake project that uses RobWork libraries.

## Contents

* _mylib_: a template for a library that uses RobWork,
* _mybin_: a template for an executable that uses RobWork,
* _myextension_: a template for a RobWork plugin,
* _myplugin_: a template for a RobWorkStudio plugin.

## Instructions

This builds the project as-is:

```
mkdir build
cd build
cmake ..
make
```

Provide your own implementations and modify CMakeLists files accordingly
to only include what you want to build.
