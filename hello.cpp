/* Zhuravlev Aleksander st129760@student.spbu.ru
	programm one
*/


#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, world!" << std::endl;
    while (true) {
        std::string userInput;
        std::cout << "Enter your name: ";
        std::getline(std::cin, userInput);
        std::cout << "Hello, " << userInput << "!" << std::endl;
    }
}
