**Calculator.cpp File**

- Opens a file called "output.txt" for writing to log all input and output
- Prints a welcome message and prompt the user to input 3 numbers
- Reads the 3 input numbers using cin and validates input
- Write the prompts and enter numbers to the log file using fputs() and fprintf()
- Prints options for operations (add, subtract, multiply, divide)
- Reads user choice for operation using cin and validates input
- Writes operation choice to log file
- Performs the selected arithmetic operation on the 3 numbers using a switch statement
- Handles divide by zero error case appropriately
- Prints out the result of the calculation to the console
- Writes result to log file along with suitable messages
- Closes the log file before exiting
- Implements a simple calculator with add/sub/mul/div operations
- Logs all input and outputs to a text file
- Validate inputs from the user
- Performs appropriate math operations based on user choice
- Prints out results and handles errors


**Calculator.py File**

The program defines a function called calculator_program() that implements a basic calculator by running an external program called "calculator" as a subprocess.

- Prompts the user to input 3 numbers and a choice of operation (add, subtract, multiply, divide)
- Formats the input into a multiline string to pass to the subprocess
- Opens the "calculator" program as a subprocess, pipes input and output to it
- Writes the input string into the subprocess's stdin
- Reads the output and errors from the subprocess after it finishes
- Prints only the relevant output line that contains the calculation result
- Prints any errors from the subprocess if there are any
- Wraps it in a try/except to catch any errors in the Python code
- Checks if it is run as the main program and if so, calls the calculator_program() function

**Main-Script.py File**

- This code imports a calculator Python module and calls the calculator_program function from that module. 
- Import calculator: This line imports the Python module named calculator. The module likely contains the calculator_program function.
- Calculator.calculator_program(): This line calls the calculator_program function from the calculator module. The function is expected to execute some functionality, possibly interacting with a C++ program or providing some calculation or result.
![image](https://github.com/shivaws/Python_project/assets/83856682/83ce1e0c-7f59-4ee0-946d-43e9d658fd47)
