# Password Manager

A small C++ console program that generates a random password for a given company and login, and saves them to a text file.

## Features

- Generates a random password (letters, digits, `!`, `@`)
- Asks for a company name and login
- Saves the result to `passwords.txt`

## Project structure

```
.
├── main.cpp           # program entry point, user input
├── src/
│   ├── password.h     # PasswordManager class declaration
│   └── password.cpp   # PasswordManager implementation
└── README.md
```

## Requirements

- A C++ compiler with C++11 support or newer (e.g. `g++`)

## Build and run

```bash
g++ main.cpp src/password.cpp -o app
./app
```

## Example

```
Write company name: Example
Write login: myname
Saved. Password: aB3x@Kp9QzL1
```

The entry is appended to `passwords.txt`:

```
Example | myname | aB3x@Kp9QzL1
```

## Warning

This is a learning project. Passwords are stored in **plain text**, and `rand()` is not cryptographically secure. Do not use it for real passwords.

## Ideas for the future

- Use `<random>` instead of `rand()`
- Encrypt the saved file
- Add a Qt graphical interface

## License

[Choose a license, e.g. MIT, or remove this section]