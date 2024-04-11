//
// Created by sasha on 22.03.2024.
//
// Написать программу, в которой используются классы с именами ‘First’ и ‘Second’.
// В каждом из классов инициализируется по одной переменной с типом данных string и произвольным значением.
// В функции int main() вводятся произвольные значения переменных.
// Значения переменных продемонстрировать на консоли.

#include <iostream>
#include <string>

// Определение класса First
class First {
private:
    std::string strFirst;

public:
    // Конструктор с параметром для инициализации переменной strFirst
    First(const std::string& str) : strFirst(str) {}

    // Метод для вывода значения переменной strFirst
    void printFirst() const {
        std::cout << "strFirst: " << strFirst << std::endl;
    }
};

// Определение класса Second
class Second {
private:
    std::string strSecond;

public:
    // Конструктор с параметром для инициализации переменной strSecond
    Second(const std::string& str) : strSecond(str) {}

    // Метод для вывода значения переменной strSecond
    void printSecond() const {
        std::cout << "strSecond: " << strSecond << std::endl;
    }
};

int main() {
    // Ввод произвольных значений переменных
    std::string strValue1, strValue2;
    std::cout << "Enter strFirst: ";
    std::cin >> strValue1;
    std::cout << "Enter strSecond: ";
    std::cin >> strValue2;

    // Создание объектов классов First и Second с введенными значениями
    First objFirst(strValue1);
    Second objSecond(strValue2);

    objFirst.printFirst();
    objSecond.printSecond();

}