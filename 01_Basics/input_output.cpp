#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    std::string occupation;

    // Getting full name with spaces
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore(); // Clear the newline left in the input buffer

    std::cout << "Enter your occupation: ";
    std::getline(std::cin, occupation);

    // Displaying a formatted welcome message
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "At " << age << " years old, pursuing your career as a " << occupation << " is truly inspiring." << std::endl;

    return 0;
}
