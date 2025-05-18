#include <iostream>
#include <string>

int main() {
    std::string fullName;
    int age;
    double height;
    int favoriteNumber;
    std::string favoriteQuote;
    std::string occupation;

    // Collect user inputs
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height (in meters, e.g., 1.75): ";
    std::cin >> height;

    std::cout << "Enter your favorite number: ";
    std::cin >> favoriteNumber;
    std::cin.ignore();  // Clear newline left in buffer before getline

    std::cout << "Enter your favorite quote: ";
    std::getline(std::cin, favoriteQuote);

    std::cout << "Enter your occupation: ";
    std::getline(std::cin, occupation);

    // Display the summary
    std::cout << "\n----- Personal Info Summary -----\n";
    std::cout << "Name: " << fullName << '\n';
    std::cout << "Age: " << age << " years old\n";
    std::cout << "Height: " << height << " meters\n";
    std::cout << "Favorite Number: " << favoriteNumber << '\n';
    std::cout << "Favorite Quote: " << favoriteQuote << '\n';
    std::cout << "Occupation: " << occupation << '\n';

    // Conditional message based on age
    if (age >= 18) {
        std::cout << "You are an adult.\n";
    } else {
        std::cout << "You are a minor.\n";
    }

    std::cout << "---------------------------------\n";

    return 0;
}
