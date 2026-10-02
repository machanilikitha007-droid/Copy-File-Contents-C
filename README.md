# Copy File Contents in C

## Project Description

A simple C program that demonstrates how to copy the contents of one text file into another file. The program reads data from `source.txt` and writes the same data into `destination.txt`.

## Features

- Open a source file in read mode
- Create a destination file
- Read data using `fgetc()`
- Write data using `fputc()`
- Copy the complete file contents
- Close both files safely

## Technologies Used

- C
- File Handling
- `FILE`
- `fopen()`
- `fgetc()`
- `fputc()`
- `fclose()`

## How to Run

1. Create a file named `copy_file.c`.
2. Create a `source.txt` file in the same project folder.
3. Add some text to `source.txt`.
4. Compile the program using a C compiler.
5. Run the program.
6. A new `destination.txt` file will be created with the copied contents.

Example using GCC:

```bash
gcc copy_file.c -o copy_file
./copy_file

===== Copy File Contents =====

File contents copied successfully!
Source File: source.txt
Destination File: destination.txt

Welcome to C programming.
This is an example of file handling.
The contents of this file will be copied.

Author

M.Likitha
