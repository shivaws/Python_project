

import subprocess

def calculator_program():
    try:
        print("Enter your input for the calculator program:")

        # Get user input for each line
        num_one = input("Please enter your first number: ")
        num_two = input("Please enter your second number: ")
        num_three = input("Please enter your third number: ")
        choice = input("Enter your choice (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division): ")

        # Format the input as a multiline string
        input_data = f"{num_one}\n{num_two}\n{num_three}\n{choice}"

        # Run the subprocess with input and output pipes
        with subprocess.Popen(["./calculator"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True) as process:
            # Send input to the subprocess
            process.stdin.write(input_data + '\n')
            process.stdin.flush()  # Flush the input buffer to make sure it's sent

            # Wait for the subprocess to finish and get output
            output, error = process.communicate()

            # Print only the relevant output
            relevant_output = "\n".join(line for line in output.split('\n') if "The Ans is:" in line)
            print("Output from calculator program:")
            print(relevant_output)

            # Print any errors (if needed)
            if error:
                print("Error from calculator program:")
                print(error)

    except subprocess.CalledProcessError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    calculator_program()
