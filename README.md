# Address Book 

The **Address Book ** is a C-based console application developed to manage contact information efficiently.

The application allows users to **create, search, edit, delete, and list contacts**. It also supports **saving and loading contact information using file handling**, so the stored contacts can be available when the application is executed again.

This project helps demonstrate the practical use of important C programming concepts such as **structures, functions, arrays, pointers, strings, and file handling**.


##  Features

*  Create a new contact
*  Search for a contact
*  Edit existing contact details
*  Delete a contact
*  List all contacts
*  Save contacts to a file
*  Load contacts from a file


##  Technologies Used

* **Programming Language:** C
* **Compiler:** GCC
* **Platform:** Linux / Windows (using GCC or WSL)
* **Concepts Used:**

  * Structures
  * Functions
  * Arrays
  * Pointers
  * Strings
  * File Handling
  * Conditional Statements
  * Loops
  * Switch Case

##  Project Structure

```text
Address-Book/
│
├── main.c
├── contact.c
├── contact.h
├── file.c
├── file.h
├── contact.txt
└── README.md
---

## Menu Options

When the program starts, the following menu is displayed:

```text
Address Book Menu:
1. Create contact
2. Search contact
3. Edit contact
4. Delete contact
5. List all contacts
6. Save and Load
```

### 1. Create Contact

Allows the user to add a new contact to the address book.

Contact details can include:

* Name
* Phone number
* Email address

### 2. Search Contact

Allows the user to search for an existing contact using the available contact information.

### 3. Edit Contact

Allows the user to modify the details of an existing contact.

### 4. Delete Contact

Allows the user to remove an existing contact from the address book.

### 5. List All Contacts

Displays all the contacts currently stored in the address book.

### 6. Save and Load

Saves the current contact information to a file. The application also loads previously stored contacts when it starts.
##  How to Compile

Open the terminal in the project directory and compile the C source files using GCC.

Example:

```bash
gcc *.c -o addressbook
```

##  How to Run

After successful compilation:

```bash
./addressbook
```

On Windows, depending on your compiler/environment:

```bash
addressbook.exe
```
##  Learning Outcomes

Through this project, I gained practical experience in:

* Writing modular C programs
* Working with structures
* Using functions and pointers
* Managing arrays of structures
* Performing file operations
* Creating menu-driven applications
* Debugging C programs
* Handling user input


##  Project

This project was developed as part of my **C Programming / Embedded Systems learning journey** to gain hands-on experience with core C programming concepts.
