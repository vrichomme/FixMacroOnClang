# FixMacroOnClang

This code based on macro compiles fine on VS2017/2019 but I would like to make it work on Clang.
To test on windows I am using clang provided with VS2019.
Here is the command line for each compiler (use VS2019 command prompt to have cmake in path):

On Windows:

* VS2019
E:\DEV\FixMacroOnClang>mkdir build && cd build
E:\DEV\FixMacroOnClang\build>cmake -G "Visual Studio 16 2019" -A x64 ../


