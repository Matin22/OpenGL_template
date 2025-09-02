# OpenGL C++ Project Template

A simple, cross-platform C++ template for OpenGL projects using CMake

## Features
- **CMake** build system.
- **GLAD** for loading OpenGL functions (included in `libs/`)
- **GLFW** for window and input management (fetched by CMake)
- **GLM** for mathematics (fetched by CMake)
- Shaders in `res/` are automatically copied to the build output

## How to Build

### Prerequisites
- A C++17 compatible compiler
- CMake (version 3.21 or newer)

### Windows (Visual Studio)
1.  Open a developer command prompt (e.g., "x64 Native Tools Command Prompt for VS 2022")
2.  Navigate to the repository root
3.  Run the following commands:
    ```sh
    cmake -S . -B build
    cmake --build build
    ```
4.  The executable will be in `build/Debug/` or `build/Release/`

### macOS / Linux
1.  Open a terminal
2.  Navigate to the repository root
3.  Run the following commands:
    ```sh
    cmake -S . -B build
    cmake --build build
    ```
4.  The executable will be in the `build/` directory