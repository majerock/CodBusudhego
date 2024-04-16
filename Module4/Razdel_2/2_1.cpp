//
// Created by sasha on 14.04.2024.
// Написать программу, в которой используются: базовый класс ‘One’; производный класс ‘Two’ и функция int main().
// В базовом классе реализовать инициализацию переменной ‘def’ с типом данных string. В производном классе реализовать инициализацию переменной ‘s’ с типом данных float, а также выводятся значения обеих переменных.
// В функции int main() вводятся произвольные значения переменных.
// Результаты продемонстрировать на консоли.

#include <iostream>
#include <string>

class One {
protected:
    std::string def;
public:
    One(const std::string& def_val) : def(def_val) {}
};

class Two : public One {
private:
    float s;
public:
    Two(const std::string& def_val, float s_val) : One(def_val), s(s_val) {}

    void display() {
        std::cout << "def= " << def << std::endl;
        std::cout << "s= " << s << std::endl;
    }
};

int main() {
    std::string input_def;
    float input_s;
    std::cout << "Enter def: ";
    std::cin >> input_def;
    std::cout << "Enter s: ";
    std::cin >> input_s;

    Two obj(input_def, input_s);

    obj.display();

    return 0;
}

