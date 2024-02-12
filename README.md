**Calculator.cpp File**

- This C++ program is a simple calculator that takes user input for three numbers and a choice of operation. Based on the user's input, it performs addition, subtraction, multiplication, or division on the provided numbers and displays the result.

- Here's a breakdown of the program's functionality:

- The program starts by welcoming the user to the calculator.

- It prompts the user to enter three numbers (Num_One, Num_Two, and Num_Three).

- It then displays a menu of operations:

Addition
Subtraction
Multiplication
Division

- The user is prompted to choose an operation by entering a number (choice).

- Depending on the user's choice, the program performs the corresponding operation:

Addition if choice is 1
Subtraction if choice is 2
Multiplication if choice is 3
Division if choice is 4
If the user chooses division (4), the program checks if the second number (Num_Two) is zero to avoid division by zero. If it is, a message is displayed, and the program exits.

- After performing the selected operation, the program displays the result.

- The program terminates.




**Calculator.py File**


This is a Python file where calculator.py is a Python program that uses the subprocess module to run a C++ program named "calculator" and capture its output. Here's a breakdown of what each part of the program does:

- Subprocess.run: This function is used to run the external command (in this case, the "./calculator" C++ program).

- ["./calculator"]: This is the command that will be executed. It runs the C++ program named "calculator."

- Check=True: If the command returns a non-zero exit code, subprocess.CalledProcessError is raised, and the program will print an error message.

- Capture_output=True: This option captures the standard output of the executed command.

- Text=True: This option specifies that the output should be returned as a string (text) rather than as bytes.

- Result.stdout: This retrieves the standard output of the executed command.

The program then prints the captured output, or in case of an error, it prints an error message.


**Main-Script.py File**

- This code imports a Python module named calculator and calls the calculator_program function from that module. 

- Import calculator: This line imports the Python module named calculator. The module likely contains the calculator_program function.

- Calculator.calculator_program(): This line calls the calculator_program function from the calculator module. The function is expected to execute some functionality, possibly interacting with a C++ program or providing some kind of calculation or result.
