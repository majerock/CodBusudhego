//
// Created by sasha on 16.04.2024.
//Написать программу, в которой используются класс с именем ‘Last’ и свойство инкапсуляции.
// При помощи данного класса инициализируются переменные:
// ‘surname’ с типом данных string; ‘salary’ с типом данных unsigned и ‘work_in_years’ с типом данных unsigned.
// Поместить в данные переменные произвольные значения и вывести их на консоль.
#include <iostream>
#include <string>

class Last {
private:
    std::string surname;
    unsigned int salary;
    unsigned int work_in_years;
public:

    Last(const std::string& sn, unsigned int sal, unsigned int years)
            : surname(sn), salary(sal), work_in_years(years) {}


    void display() const {
        std::cout << "Surname: " << surname << std::endl;
        std::cout << "Salary: " << salary << " RUB" << std::endl;
        std::cout << "Work in year: " << work_in_years << " year" << std::endl;
    }
};

int main() {
    Last employee("Rabotnik", 50000, 5);

    employee.display();

    return 0;
}