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
