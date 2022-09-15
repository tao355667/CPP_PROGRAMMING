# CPP-PROGRAMMING
C++语言程序设计（第五版）郑莉，代码练习
配置：
小黑框：launch.json："externalConsole": true
汉字：tasks.json     "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe",
                "-fexec-charset=GBK"/*加上这一行*/
            ],

