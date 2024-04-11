//
// Created by sasha on 22.03.2024.
//Написать программу, в которой используются: базовый класс ‘First’; производный класс ‘Second’ и функция int main().
// В базовом классе реализовать инициализацию переменной ‘a’ с типом данных float.
// В производном классе реализовать инициализацию переменной ‘b’ с типом данных float, а также выводятся значения обеих переменных.
// В функции int main() вводятся произвольные значения переменных.
// Результаты продемонстрировать на консоли.

#include <iostream>

// Определение базового класса First
class First {
protected:
    float a;

public:
    // Конструктор с параметром
    First(float _a) : a(_a) {}

    // Метод для вывода значения переменной a
    void printA() const {
        std::cout <<"a: " << a << std::endl;
    }
};

// Определение производного класса Second, который наследует от First
class Second : public First {
private:
    float b;

public:
    // Конструктор с параметрами
    Second(float _a, float _b) : First(_a), b(_b) {}

    // Метод для вывода значения переменной b
    void printB() const {
        std::cout <<"b: " << b << std::endl;
    }
};

int main() {
    // Ввод произвольных значений переменных a и b
    float aValue, bValue;
    std::cout << "Enter a: ";
    std::cin >> aValue;
    std::cout << "Enter b: ";
    std::cin >> bValue;

    // Создание объекта класса Second
    Second obj(aValue, bValue);

    obj.printA();
    obj.printB();

}
