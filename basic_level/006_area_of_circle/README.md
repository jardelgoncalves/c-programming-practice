# Exercise: Area of a Circle

![Level: Basic](https://img.shields.io/badge/Level-Basic-brightgreen)

In this exercise, you are tasked with implementing a function that calculates the area of a circle. The area is calculated using the formula `area = π * radius²`, where π is approximately 3.14159. The function should take the radius as an argument and print the calculated area in the format `A=area` (e.g `A=12.5664`), where the area is rounded to four decimal places.


## Requirements:
- The function will receive a floating-point value (double precision) as input, representing the radius.
- You **must** use `printf` to print the result in the following format: `A=area`, where the area is rounded to **4 decimal places**.

You do not need to worry about handling input or edge cases; simply implement the logic to calculate the area and return the value rounded to 4 decimal places.

## Instructions:
1. Open the file `basic_level/006_area_of_circle/area_of_circle.c` in your preferred code editor.
2. Remove the comments and placeholder code:
  - The code you’ll find in the file is a placeholder, with comments indicating that the function is not yet implemented. You need to remove these comments and the unnecessary lines.
3. Implement the function:

4. Compile the file `basic_level/006_area_of_circle/main.c`:
    After implementing the function, you need to compile the `main.c` file, which contains the test code that checks whether your function works correctly. Open a terminal and run the following command:
    ```bash
    gcc -o main_executable main.c
    ```
    This will compile the `main.c` file and generate an executable named `main_executable`.

5. Run the compiled file:
    After compiling, you can run the generated executable to test your implementation. Use the following command to execute the program:
    ```bash
    ./main_executable
    ```
    The program will run the test cases and output whether your implementation of the `area_of_circle` function is correct.

