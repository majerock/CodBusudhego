//
// Created by sasha on 11.04.2024.
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
    First(float a_val) : a(a_val) {}
};


class Second : public First {
private:
    float b;
public:
    Second(float a_val, float b_val) : First(a_val), b(b_val) {}

    void display() {
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;
    }
};

int main() {
    float input_a, input_b;
    std::cout << "Enter a: ";
    std::cin >> input_a;
    std::cout << "Enter b: ";
    std::cin >> input_b;

    Second obj(input_a, input_b);

    obj.display();

    return 0;
}
