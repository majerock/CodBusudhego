//
// Created by sasha on 22.04.2024.
//Написать программу, в которой используются: базовый класс ‘First’; производный класс ‘Second’ и функция int main().
// В базовом классе реализовать инициализацию переменной ‘a’ с типом данных float.
// В производном классе реализовать инициализацию переменной ‘b’ с типом данных float, а также выводятся значения обеих переменных.
// В функции int main() вводятся произвольные значения переменных.
// Результаты продемонстрировать на консоли.

#include <iostream>

class First {
protected:
    float a;

public:

    First(float _a) : a(_a) {}


    void printA() {
        std::cout << " a: " << a << std::endl;
    }
};

class Second : public First {
protected:
    float b;

public:
    Second(float _a, float _b) : First(_a), b(_b) {}

    void printB() {
        std::cout << " b: " << b << std::endl;
    }
};

int main() {
    float aValue, bValue;
    std::cout << "Enter a: ";
    std::cin >> aValue;
    std::cout << "Enter b: ";
    std::cin >> bValue;

    Second obj(aValue, bValue);

    obj.printA();
    obj.printB();

    return 0;
}