#include <iostream>
#include <string>


int main() {

    std::string name;  // объявляем переменную name
    std::string dela = "Хорошо";
    std::cout << "Как тебя зовут?\n";
    std::getline(std::cin, name);  // считываем её значение с клавиатуры

    std::cout << "Привет, " << name << "!\n";
    std::cout << "Как твои дела?\n";
    std::getline(std::cin, dela);
    std::cout << "У меня все " << dela << "!\n";
}
