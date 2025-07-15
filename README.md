# File_Encryptor_Decryptor

## Overview

File_Encryptor_Decryptor is a C++ application that recursively encrypts or decrypts all files in a specified directory. It uses a simple byte-shifting algorithm, with the encryption key sourced from a `.env` file. The project is modular, with clear separation between file handling, process management, and cryptographic logic.

## Features

- **Recursive Directory Processing:** Encrypts or decrypts every file in a given directory and its subdirectories.
- **Simple Encryption/Decryption:** Uses a byte-wise shift cipher, with the key read from a `.env` file.
- **Task Queue:** Each file operation is managed as a task and processed via a queue.
- **Modular Design:** Clean separation of concerns for file I/O, environment reading, process management, and cryptographic operations.
- **Cross-Platform:** Uses standard C++ and STL, making it portable across systems with a modern C++ compiler.
- **In-Place File Modification:** Files are encrypted/decrypted in-place, so ensure you have backups if needed.

## Directory Structure

```
.
├── main.cpp
├── CMakeLists.txt
├── src/
│   └── app/
│       ├── EncrpytDecrypt/
│       │   ├── Cryption.cpp/.hpp/.Main.cpp
│       ├── Processes/
│       │   ├── ProcessManagement.cpp/.hpp
│       │   ├── Task.hpp
│       ├── fileHandling/
│           ├── IO.cpp/.hpp
│           ├── ReadEnv.cpp
├── test/
│   └── test1.txt
```

## Getting Started

### Prerequisites

- C++ compiler with C++26 support
- CMake >= 3.31

### Build Instructions

1. Clone the repository.
2. Create a `.env` file in the project root containing a single integer (the encryption key), e.g.:
   ```
   42
   ```
3. Build the project using CMake:
   ```sh
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

### Usage

1. Run the executable:
   ```
   ./File_Enc_Dec
   ```
2. Enter the directory path when prompted.
3. Enter the action (`encrypt` or `decrypt`) when prompted.

All files in the directory (and subdirectories) will be processed in-place.

#### Example

- Place a sample file (e.g., `test/test1.txt`) in your target directory.
- Run the program and follow the prompts to encrypt or decrypt the file.

## How It Works

- **main.cpp:** Handles user input and iterates through files, creating tasks for each.
- **ProcessManagement:** Manages a queue of file tasks and executes them.
- **Task:** Represents a file operation (encrypt/decrypt).
- **Cryption:** Performs the actual byte-wise encryption/decryption using the key from `.env`.
- **IO/ReadEnv:** Handles file stream management and reading the encryption key.

## Notes

- The encryption is a simple byte shift and is not secure for sensitive data.
- The `.env` file must exist in the project root and contain only the key (integer).
- Files are modified in-place; make backups if needed.
- The project is intended for educational or demonstrative purposes, not for production use.
- If you encounter file access errors, ensure you have the necessary permissions for the target directory and files.

## Contributing

Contributions are welcome! Please open issues or submit pull requests for improvements, bug fixes, or new features.

## License

[MIT License](LICENSE) (add your license file if needed)