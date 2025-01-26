# C Programming Language
A collection of practical exercises and challenges to enhance your C programming skills, ranging from basic to advanced levels. This repository is designed to help you strengthen your understanding of C through hands-on coding practice.

## Repository Structure


| Level                 | Description                                                                                             |
|-----------------------|---------------------------------------------------------------------------------------------------------|
| **Basic Level**       | Simple exercises focusing on fundamental C concepts such as variables, loops, and functions.            |
| **Intermediate Level**| Exercises involving more complex logic, conditionals, and working with arrays and pointers.             |
| **Advanced Level**    | Complex challenges that test your understanding of algorithms, memory management, and optimization.     |
| **Future Updates**    | Planned sections for **Algorithms** and **Data Structures**. Stay tuned for future exercises!           |

## Branches

### `main` (Exercises without implementation)

- This is the **default branch** where all exercises are **without implementation**. Each exercise will contain **only the function signature** and tests using `assert` in the `[NUMBER]_exercise_[NAME].c` (e.g `001_exercise_sum.c`) file to check the validity of the solution.
- You can clone this branch to **work on the exercises** and **implement the missing functionality**.

#### How to use the `main` branch:

1. Clone the repository:
    ```bash
    git clone https://github.com/jardelgoncalves/c-programming-practice.git
    ```
2. Make sure you are on the main branch (this is the default branch):
    ```bash
    git checkout main
    ```
3. Navigate to the exercise folder:

    Each exercise is organized in its own folder (e.g., `001_sum_of_two_integers`). Inside each folder, you'll find the following files:
    - `sum_of_two_integers.c`: This is where the function `sum_of_two_integers` is declared, but not yet implemented. You need to implement the function here.
    - `tests.c`: This file imports sum_of_two_integers and contains unit tests to verify that your implementation is correct.
    - `main.c`: This is the main file for the exercise. It imports the `run_tests` function from tests.c and contains the main function. You should execute this file to run the tests and check if your solution is correct.
4. Open the exercise in your preferred code editor:

    Edit the function in `sum_of_two_integers.c` and write your solution. After implementing the function, you can run the tests to verify your implementation.

5. Compile and run the tests: To compile and run the C code for a specific exercise, follow these steps:
    - Navigate to the exercise folder (e.g., `basic_levels/001_sum_of_two_integers`).
    - Compile the `main.c` file
    ```bash
    gcc -o main_executable main.c
    ```
    - Run the compiled program (e.g for Linux):
    ```bash
    ./main_executable
    ```

### `solutions` (Branch with solutions)
This branch contains the **implemented solutions** for all the exercises. If you need help or want to compare your solution, you can check this branch.

#### How to use the `solutions` branch:
1. Clone the repository:
    ```bash
    git clone https://github.com/jardelgoncalves/c-programming-practice.git
    ```
2. Switch to the `solutions` branch:
    ```bash
    git checkout solutions
    ```
3. Open the exercises and compare your solutions with the implementations (e.g., `basic_levels/001_sum_of_two_integers`). Feel free to learn from the solutions and improve your skills!

4. Compile and run the tests: To compile and run the C code for a specific exercise, follow these steps:
    - Navigate to the exercise folder (e.g., `basic_levels/001_sum_of_two_integers`).
    - Compile the `main.c` file
    ```bash
    gcc -o main_executable main.c
    ```
    - Run the compiled program (e.g for Linux):
    ```bash
    ./main_executable
    ```


## Contributing
Contributions are welcome! If you'd like to add new exercises or improve existing ones, follow these steps:

1. Fork the repository.
2. Create a new branch (git checkout -b feature-name).
3. Make your changes and commit them (git commit -am 'Add new exercise').
4. Push to your fork (git push origin feature-name).
5. Open a pull request to the main repository.

## License

This repository is licensed under the MIT License. See the [LICENSE](https://www.mit.edu/~amini/LICENSE.md) file for more information.
