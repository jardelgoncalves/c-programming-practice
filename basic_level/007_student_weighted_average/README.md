# Exercise: Student's Weighted Average

![Level: Basic](https://img.shields.io/badge/Level-Basic-brightgreen)

In this exercise, you are tasked with implementing a function that receives two double precision floating-point values, `A` and `B`, which represent the grades of a student. The function should then calculate the student's weighted average, where **grade A has a weight of 3.5** and **grade B has a weight of 7.5**. The total weight is therefore 11. Assume that each grade will be between 0 and 10.0, with one decimal place.

Print the message "MEDIA" and the student's average as shown below, with 5 digits after the decimal point and a space before and after the equality sign.


## Requirements:
- The function will receive two floating-point values (`A` and `B`).
- Print the result with the message `"MEDIA = average"`, where average is the calculated result, formatted to **5 decimal places**.
- The output should look like:
  ```bash
  AVERAGE = 6.43182
  ```

You do not need to worry about handling input or edge cases; simply implement the logic to calculate the area and return the value rounded to 4 decimal places.

## Instructions:
1. Open the file `basic_level/007_student_weighted_average/student_weighted_average.c` in your preferred code editor.
2. Remove the comments and placeholder code:
  - The code you’ll find in the file is a placeholder, with comments indicating that the function is not yet implemented. You need to remove these comments and the unnecessary lines.
3. Implement the function:

4. Compile the file `basic_level/007_student_weighted_average/main.c`:
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
    The program will run the test cases and output whether your implementation of the `student_weighted_average` function is correct.

