# CPP-PROGRAMMING

C++语言程序设计（第五版）郑莉，董渊

书中C++代码练习

## 文件介绍

|文件名   |描述                     |
|--------|------------------------|
|chapt1  |第1章的代码（例程+课后题）|
|chapt2  |第2章的代码（例程+课后题）|
|chapt3  |第3章的代码（例程+课后题）|
|chapt4  |第4章的代码（例程+课后题）|
|chapt5  |第5章的代码（例程+课后题）|
|chapt6  |第6章的代码（例程+课后题）|
|chapt7  |第7章的代码（例程+课后题）|
|chapt8  |第8章的代码（例程+课后题）|
|chapt9  |第9章的代码（例程+课后题）|
|chapt9  |第9章的代码（例程+课后题）|
|experiment|学校课程中的练习代码    |
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
