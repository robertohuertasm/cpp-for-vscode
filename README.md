# cpp

This configuration works both in Linux and Windows.

Just press **F5** and it will work out of the box. It will compile the `test.cpp` using `g++` and will debug your program with `gdb`.

Remember that the output of your program will be shown in the `Debug Console` tab of your integrated terminal.

In Windows, use `MinGw` to get `g++` working.

## Windows

Just download `MinGw` from [here](http://www.mingw.org/). Install it and once you get to the installation screen select `g++` packages.

Remember to set the path into your environment variables:

`C:\MinGW\bin`

## Tasks

You have a build task (ctrol + shift + b) which will generate `test.exe` and also a run task, which is mapped to  (ctrol + shift + alt + B).
