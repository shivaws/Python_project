
//this is a calculator c++ program//

#include <iostream>
#include <cstdio>

int main() {
    FILE* file = fopen("output.txt", "w");

    if (file == nullptr) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    int Num_One, Num_Two, Num_Three, choice, Result;

    std::cout << "Welcome to calculator programmer" << std::endl;

    std::cout << "Please enter your first number" << std::endl;
    std::cin >> Num_One;

    if (std::cin.fail()) {
        std::cerr << "Error reading input. Exiting." << std::endl;
        fclose(file);
        return 1;
    }

    // Use fputs to write to the file
    fputs("Please enter your first number\n", file);
    fprintf(file, "%d\n", Num_One);

    std::cout << "Please enter your second number" << std::endl;
    std::cin >> Num_Two;

    if (std::cin.fail()) {
        std::cerr << "Error reading input. Exiting." << std::endl;
        fclose(file);
        return 1;
    }

    // Use fputs to write to the file
    fputs("Please enter your second number\n", file);
    fprintf(file, "%d\n", Num_Two);

    std::cout << "Please enter your third number" << std::endl;
    std::cin >> Num_Three;

    if (std::cin.fail()) {
        std::cerr << "Error reading input. Exiting." << std::endl;
        fclose(file);
        return 1;
    }

    // Use fputs to write to the file
    fputs("Please enter your third number\n", file);
    fprintf(file, "%d\n", Num_Three);

    std::cout << "1) Addition\n";
    std::cout << "2) Subtraction\n";
    std::cout << "3) Multiplication\n";
    std::cout << "4) Division\n";

    std::cin >> choice;

    if (std::cin.fail()) {
        std::cerr << "Error reading input. Exiting." << std::endl;
        fclose(file);
        return 1;
    }

    // Use fputs to write to the file
    fputs("User choice\n", file);
    fprintf(file, "%d\n", choice);

    switch (choice) {
        case 1: // Addition
            Result = Num_One + Num_Two + Num_Three;
            break;
        case 2: // Subtraction
            Result = Num_One - Num_Two - Num_Three;
            break;
        case 3: // Multiplication
            Result = Num_One * Num_Two * Num_Three;
            break;
        case 4: // Division
            if (Num_Two == 0) {
                // Use fputs to write to the file
                fputs("Please enter a number which is not equal to zero\n", file);
                fclose(file);
                return 0;
            } else {
                Result = Num_One % Num_Two;
                break;
            }
        default:
            // Use fputs to write to the file
            fputs("Invalid choice\n", file);
            fclose(file);
            return 0;
    }

    if (choice >= 1 && choice <= 4) {
        std::cout << "The Ans is: " << Result << std::endl;

        // Use fputs to write to the file
        fputs("The Ans is\n", file);
        fprintf(file, "%d\n", Result);
    }

    fclose(file);
    return 0;
}
