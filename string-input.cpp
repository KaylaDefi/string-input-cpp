#include <iostream>  // provides std::cin and std::cout for console I/O
#include <string>    // provides std::string and std::getline

int main() {
    // Loop 3 times to collect string pairs of varying lengths
    for (int i = 1; i <= 3; i++) {
        std::string first, second;  // variables to hold the two user inputs

        std::cout << "\n--- Round " << i << " ---\n";

        // Read the first string, including any spaces, until the user presses Enter
        std::cout << "Enter first string: ";
        std::getline(std::cin, first);

        // Read the second string the same way
        std::cout << "Enter second string: ";
        std::getline(std::cin, second);

        // Concatenate the two strings using the + operator
        std::string result = first + second;

        // Print the combined result to the console
        std::cout << "Concatenated result: " << result << "\n";
    }

    return 0;  // indicate successful program termination
}
