# CPP-PROGRAMMING
代码练习

C++语言程序设计（第五版）郑莉，董渊

编辑:visual studio code 1.70.0

编译:TDM-GCC-64 

## VS Code配置：
小黑框：launch.json
```
"externalConsole": true
```
汉字：tasks.json
```
    "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe",
                "-fexec-charset=GBK"/*加上这一行*/
            ],
```
**隐藏.exe文件:**

文件，首选项，设置，搜索 files.exclude，在后面添加`**/*.exe`即可

## 一些过程
1. 在书中了解到在cpp文件中调用c语言库时,最好使用`#include<cstdio>`而非`#include<stdio.h>`
