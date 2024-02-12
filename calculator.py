import subprocess

def calculator_program():
    try:
        result = subprocess.run(["./calculator"], check=True, capture_output=True, text=True)
        print("Output from calculator program:")
        print(result.stdout)
    except subprocess.CalledProcessError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    calculator_program()
