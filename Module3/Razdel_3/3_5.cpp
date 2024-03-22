//
// Created by sasha on 22.03.2024.
//Написать программу, в которой используются: базовый класс ‘First’; производный класс ‘Second’ и функция int main().
// В базовом классе реализовать инициализацию переменной ‘abc’ с типом данных string.
// В производном классе реализовать инициализацию переменной ‘w’ с типом данных float, а также выводятся значения обеих переменных.
// В функции int main() вводятся произвольные значения переменных.
// Результаты продемонстрировать на консоли.

#include <iostream>
#include <string>


class First {
protected:
    std::string abc;
public:
    First(const std::string& str) : abc(str) {}
};

class Second : public First {
private:
    float w;
public:
    Second(const std::string& str, float val) : First(str), w(val) {}

    void display() {
        std::cout << "abc: " << abc << std::endl;
        std::cout << "w: " << w << std::endl;
    }
};

int main() {
    std::string input_str;
    float input_float;

    std::cout << "Enter abc (str): ";
    std::getline(std::cin, input_str);
    std::cout << "Enter w (float): ";
    std::cin >> input_float;

    Second obj(input_str, input_float);

    obj.display();

    return 0;
}
