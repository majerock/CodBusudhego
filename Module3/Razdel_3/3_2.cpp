//
// Created by sasha on 22.03.2024.
//

#include <iostream>
#include <string>

// класс New
class New {
private:
    std::string name;
    std::string surname;

public:
    // Конструктор класса New
    New(const std::string& n, const std::string& s) : name(n), surname(s) {}

    // Методы для доступа к переменным класса
    std::string getName() const { return name; }
    std::string getSurname() const { return surname; }
};

int main() {
    // Инициализация объекта класса New
    New myNew("John", "Doe");

    std::cout << "Name: " << myNew.getName() << std::endl;
    std::cout << "Surname: " << myNew.getSurname() << std::endl;

}