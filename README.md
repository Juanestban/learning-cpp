# Tutorials cpp - Leaning

setting file vscode example json:
```json
{
  "C_Cpp.default.compilerPath": "d:\\Dev-Cpp\\bin\\cpp.exe",
  "files.associations": {
    "*.json": "jsonc",
    "*.tcc": "cpp"
  }
}
```

task json file vscode example:
```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "type": "shell",
      "label": "C/C++: cpp.exe build active file",
      "command": "d:\\Dev-Cpp\\bin\\cpp.exe",
      "args": [
        "-fdiagnostics-color=always",
        "-g",
        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      "options": {
        "cwd": "d:\\Dev-Cpp\\bin"
      },
      "problemMatcher": [
        "$gcc"
      ],
      "group": "build",
      "detail": "compiler: d:\\Dev-Cpp\\bin\\cpp.exe"
    },
    {
      "type": "cppbuild",
      "label": "C/C++: g++.exe build active file",
      "command": "D:\\msys64\\mingw64\\bin\\g++.exe",
      "args": [
        "-fdiagnostics-color=always",
        "-g",
        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      "options": {
        "cwd": "${fileDirname}"
      },
      "problemMatcher": [
        "$gcc"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "detail": "Task generated by Debugger."
    }
  ]
}
```

## build cpp files
commands
```sh
g++ file.cpp
```

rename file compile => .exe
```sh
g++ -o file.exe file.cpp
```

or:
```sh
g++ file.cpp -o file.exe
```