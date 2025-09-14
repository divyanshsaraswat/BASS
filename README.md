# Banking ATM Simulation System

## A C++ learning friendly project that tries to replicate the Banking-ATM Simulator.

![Build](https://img.shields.io/badge/build-passing-brightgreen)
![License](https://img.shields.io/badge/license-MIT-blue)

# Features

## Table of Contents

- [Features](#Features)
- [Installation](#Installation)
- [Usage](#Usage)
- [Project Structure](#project-structure)
- [Tech Stack](#tech-stack)
- [Contributing](#contributing)
- [License](#license)

## Features

- User account creation and management
- Deposit, withdraw, and balance inquiry
- ATM simulation with PIN verification
- Transaction history with file storage
- Demonstrates OOP concepts (Inheritance, Polymorphism, etc.)

## Project Structure

```powershell
├── include/        # Header files
├── src/            # Implementation files
├── main.cpp        # Entry point
├── CMakeLists.txt  # Build configuration
├── README.md       # Documentation
```

## Tech-Stack

- C++ (17) , makefile

## Installation

These steps assume you are on Windows and have a working developer toolchain. This project was developed with MinGW-w64 (g++) but will also build with MSVC/CMake if you prefer.

- Install a C++ compiler (MinGW-w64 or MSVC). For MinGW use MSYS2 and install `mingw-w64-x86_64-gcc`.
- Install `make` (MSYS2 provides `make`) or use the included `makefile` from a Unix-like shell such as MSYS2/MinGW or WSL.

Optional (Qt integration): If you plan to add a GUI with Qt, see the `docs/` folder for guidance and choose either `CMake + Qt` or a `qmake` workflow.

## Build (MinGW / MSYS2)

Open a PowerShell or MSYS2 MinGW 64-bit shell and run:

```powershell
# from project root
make
```

If you prefer an out-of-source CMake workflow (recommended for larger projects and Qt integration), create a `CMakeLists.txt` and build with:

```powershell
mkdir build; cd build
cmake .. -G "Unix Makefiles"
cmake --build .
```

## Run

From the project root (or `build` folder if you used CMake):

```powershell
./app.exe
# or if executable is named main
./main.exe
```

## Usage

This repository contains a learning-friendly Banking ATM Simulation. The application currently runs as a console program. Key behaviours:

- Create and manage user accounts
- Deposit, withdraw and check balance
- PIN verification for ATM access
- Transactions are persisted to files in the `data/` folder

The current `main.cpp` is a tiny runner that prints a message and waits for input. You can open and run `src/` implementations for the ATM simulation.

## Notes and Compatibility

- The sample `main.cpp` uses `conio.h` and `getch()` which are available in MinGW and some Windows toolchains. If you build this on non-Windows platforms or with other toolchains, replace `getch()` with standard alternatives (for example, read from `std::cin`).
- If you add classes that use Qt's `Q_OBJECT` macro, use CMake/qmake to ensure `moc` runs automatically — manual Makefiles require explicit `moc` steps.

## Contributing

- Fork the repository and create a feature branch for your changes.
- Run and update tests in `tests/` when you add functionality.
- Write clear commit messages and open a pull request describing changes.

## License

This project is released under the MIT License. See `LICENSE` for details.
