# Genius BookShop Management System

A simple, console-based bookshop management system written in C++. This application provides basic functionalities for user authentication and book management.

## Description

This project is a command-line application designed to simulate the basic operations of a bookshop. It allows users to register, log in, add book details, and view company information. All user registration data is saved to a local text file (`records.txt`).

## Features

This program offers a menu-driven interface with the following options:

1.  **Register**: Allows a new user to create an account by providing a username and password. The credentials are saved to `records.txt`.
2.  **Login**: Authenticates a user by checking the entered username and password against the stored records.
3.  **Add Book**: A function to input details for a new book, including its name, price, quantity, and a discount amount. It then calculates the total price.
4.  **View Company Details**: Displays static information about the bookshop, such as name, address, and contact details.
5.  **Logout**: Allows the user to exit the program.

## Technical Details

-   **Language**: C++
-   **Core Concepts Used**:
    -   File I/O (`fstream`) for reading and writing user data.
    -   `struct` to define the structure for book details.
    -   Functions to modularize different features like `login()`, `registration()`, etc.
    -   `switch` statements for menu navigation.

## How to Compile and Run

To compile and run this project, you will need a C++ compiler (like G++).

1.  **Save the Code**: Save the code into a file named `Source.cpp`.

2.  **Compile the Program**: Open a terminal or command prompt and run the following command:
    ```bash
    g++ Source.cpp -o Bookshop
    ```

3.  **Run the Executable**: Execute the compiled program:
    ```bash
    ./Bookshop
    ```
    On Windows, you can simply run:
    ```bash
    Bookshop.exe
    ```

4.  **Data File**: The program will automatically create a `records.txt` file in the same directory to store user registration details when the registration function is used for the first time.
