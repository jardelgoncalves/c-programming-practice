# Exercise: Sum of Two Integers
![Level: Basic](https://img.shields.io/badge/Level-Basic-brightgreen)

In this exercise, implement a function that takes two integers as arguments and calculates their sum. The function should return the sum. You do not need to handle input; assume the integers are passed to the function. The result should be returned, not printed.

## Instructions:
1. Open the file `basic_level/001_sum_of_two_integers/sum_of_two_integers.c` in your preferred code editor.
2. Remove the comments and placeholder code:
  - The code you’ll find in the file is a placeholder, with comments indicating that the function is not yet implemented. You need to remove these comments and the unnecessary lines.
  - For example, the current code will look something like this:
    <div style="background-color: #d9eb6a; color: #333; padding: 10px; border-radius: 5px;">
        <strong>WARNING:</strong> The code shown below is just an example for the step-by-step guide. It may belong to another exercise and should not be directly copied for this task. The purpose is to demonstrate the process for completing the current exercise.
    </div>

    ```c
      #include <stdio.h>

      // TODO: The following include is unnecessary and can be removed
      #include <stdlib.h> // This line can be removed as 'abort' is not used anymore

      // Example of a function that simulates a non-implemented function
      int sum_of_two_integers(int a, int b)
      {
          // TODO: Remove this line and implement the addition function correctly
          fprintf(stderr, "ERROR: Function 'sum_of_two_integers' is not implemented yet!\n");
          abort(); // Immediately terminates the program
      }
    ```
  - After removing the comments and the unnecessary lines, the file should look like this:
    <div style="background-color: #d9eb6a; color: #333; padding: 10px; border-radius: 5px;">
        <strong>WARNING:</strong> The code shown below is just an example for the step-by-step guide. It may belong to another exercise and should not be directly copied for this task. The purpose is to demonstrate the process for completing the current exercise.
    </div>

    ```c
      #include <stdio.h>

      int sum_of_two_integers(int a, int b)
      {

      }
    ```
3. Implement the function:

    Now that the placeholder code has been removed, you can go ahead and implement the sum_of_two_integers function. The function should accept two integers as arguments, calculate their sum, and return the result. The implementation might look like this:
      <div style="background-color: #d9eb6a; color: #333; padding: 10px; border-radius: 5px;">
        <strong>WARNING:</strong> The code shown below is just an example for the step-by-step guide. It may belong to another exercise and should not be directly copied for this task. The purpose is to demonstrate the process for completing the current exercise.
    </div>

    ```c
    #include <stdio.h>

    int sum_of_two_integers(int a, int b)
    {
        return a + b;
    }
    ```

4. Compile the file `basic_level/001_sum_of_two_integers/main.c`:
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
    The program will run the test cases and output whether your implementation of the `sum_of_two_integers` function is correct.

