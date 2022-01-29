# cmake_clang_mydemo


### 环境
* Windows10
* 安装`MinGW`,配置系统环境变量，当前版本：`gcc version 6.3.0 (MinGW.org GCC-6.3.0-1)`
* 安装`CMake`,配置系统环境变量，当前版本：`cmake version 3.22.2`
* 工程名称：`CMakeClangDemo`

### 创建文件夹build
```
mkdir build
```

### 执行`cmake`
```
 cmake -G "MinGW Makefiles" -S ./ -B ./build
```
```
PS C:\Users\Administrator\Desktop\clangTest\clangDemo>  cmake -G "MinGW Makefiles" -S ./ -B ./build
-- The C compiler identification is GNU 6.3.0
-- The CXX compiler identification is GNU 6.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: D:/devToolInstall/MinGW/bin/gcc.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: D:/devToolInstall/MinGW/bin/g++.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
Project Name: CMakeClangDemo
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/Administrator/Desktop/clangTest/clangDemo/build
PS C:\Users\Administrator\Desktop\clangTest\clangDemo>
```

### 进入目录
```
cd build
```
### 执行` mingw32-make`
```
mingw32-make
```
```
PS C:\Users\Administrator\Desktop\clangTest\clangDemo\build> mingw32-make
[ 33%] Building C object CMakeFiles/CMakeClangDemo.dir/src/include/test.c.obj
[ 66%] Building C object CMakeFiles/CMakeClangDemo.dir/src/init/main.c.obj
[100%] Linking C executable ..\bin\CMakeClangDemo.exe
[100%] Built target CMakeClangDemo
```
### 执行`.exe`
```
cd ../bin

./CMakeClangDemo.exe
```
