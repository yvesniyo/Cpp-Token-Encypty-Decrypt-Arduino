# Token System in C++

A C++ implementation of a token encoding/decoding system with encryption capabilities.

## Overview

This project provides a set of classes for handling tokens that contain various pieces of information (ID, key, amount, device ID, and order). The system can encode tokens into a specific format, encrypt them using a simple substitution cipher, and decode/decrypt them back to their original components.

## Project Structure

```
token-system-cpp/
├── include/
│   ├── Token.hpp
│   ├── TokenOrganizer.hpp
│   ├── Encrypty.hpp
│   ├── TokenHeaders.hpp
│   └── StringClass.hpp
├── src/
│   ├── Token.cpp
│   ├── TokenOrganizer.cpp
│   ├── Encrypt.cpp
│   ├── StringClass.cpp
│   └── main.cpp
└── Makefile
```

## Classes

### Token
Represents a token with the following properties:
- `id`: Identifier (4 characters)
- `key`: Security key (1 character)
- `amount`: Transaction amount (6 characters)
- `deviceId`: Device identifier (7 characters)
- `order`: Order pattern (2 characters)

### TokenOrganizer
Handles the encoding and decoding of tokens based on order patterns:
- `decode()`: Extracts token components from an encrypted string
- `encode()`: Combines token components into a formatted string
- `stepOrders()`: Defines 16 different patterns for organizing token components

### Encrypt
Provides simple encryption/decryption using a substitution cipher:
- `encrypt()`: Encodes a token using character substitution
- `decrypt()`: Decodes an encrypted string back to its original form
- `exchange()`: Performs the character substitution (0→9, 1→8, 2→7, etc.)

### StringClass
Utility class for string manipulation:
- `append()`: Appends characters or strings
- `length()`: Returns string length
- `equal()`: Compares two strings
- `substring()`: Extracts a substring

## Building the Project

### Prerequisites
- C++ compiler (g++ or clang++)
- Make utility

### Compilation
```bash
make
```

### Running
```bash
./token-system
```

## Encryption Method

The system uses a simple substitution cipher where digits are mapped as follows:
- 0 → 9
- 1 → 8
- 2 → 7
- 3 → 6
- 4 → 4
- 5 → 5
- 6 → 3
- 7 → 2
- 8 → 1
- 9 → 0

## Order Patterns

The system supports 16 different patterns for organizing token components, identified by order codes from "01" to "16". Each pattern defines a different arrangement of the five token components (order, device ID, amount, key, and ID).

## Example Usage

The main.cpp file contains an example of how to use the token system:

```cpp
#include <iostream>
#include "../include/Token.hpp"

int main()
{
    char id[30] = "97499899347416048962";
    Token token = Token();
    char idId[10] = {};
    char keyKey[10] = {};
    char amountAmount[10] = {};
    char deviceIdDevice[10] = {};
    char orderOrder[10] = {};

    token.parse(id, idId, amountAmount, orderOrder, keyKey, deviceIdDevice);

    std::cout << std::endl << "Amount = " << amountAmount;
    std::cout << std::endl << "Id = " << idId;
    std::cout << std::endl << "Key = " << keyKey;
    std::cout << std::endl << "Order = " << orderOrder;
    std::cout << std::endl << "Device = " << deviceIdDevice << std::endl;
}
```

## Important Notes

1. **Memory Management**: The code uses manual memory management with new/delete. Be cautious of memory leaks.
2. **Buffer Sizes**: Fixed buffer sizes are used throughout the code. Ensure inputs don't exceed these sizes.
3. **Security**: The encryption method is simple and not suitable for security-sensitive applications.
4. **Error Handling**: Minimal error handling is implemented. Additional validation would be needed for production use.

## Potential Improvements

1. Use C++ standard library strings instead of char arrays
2. Implement proper error handling
3. Add input validation
4. Use smart pointers for better memory management
5. Implement more secure encryption

## License

This project is provided as-is without any specific license. Feel free to use and modify according to your needs.
