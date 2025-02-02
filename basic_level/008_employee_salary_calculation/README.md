# Exercise: Employee Salary Calculation

![Level: Basic](https://img.shields.io/badge/Level-Basic-brightgreen)

In this exercise, you are tasked with implementing a function that calculates the salary of an employee. The function will receive three parameters: the employee's number, the number of hours worked, and the hourly wage. After calculating the salary, your function should return the employee's number and the salary, formatted to two decimal places.


## Requirements:
- The function will receive three arguments:
  1. An integer representing the employee's number.
  2. An integer representing the number of hours worked.
  3. A floating-point number (with two decimal places) representing the hourly wage.
- The salary is calculated by multiplying the number of hours worked by the hourly wage.
- **Use only a single** `printf` to output the result.
- The function should return the result as a string in the following format:
  ```bash
  NUMBER = <employee_number>
  SALARY = $ <salary>
  ```
- The salary must be printed with exactly **two decimal places**.



## Instructions:
1. Open the file `basic_level/008_employee_salary_calculation/employee_salary_calculation.c` in your preferred code editor.
2. Remove the comments and placeholder code:
  - The code you’ll find in the file is a placeholder, with comments indicating that the function is not yet implemented. You need to remove these comments and the unnecessary lines.
3. Implement the function.

4. Compile the file `basic_level/008_employee_salary_calculation/main.c`:
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
    The program will run the test cases and output whether your implementation of the `employee_salary_calculation` function is correct.

