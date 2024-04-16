//
// Created by sasha on 16.04.2024.
//Написать программу, в которой используются: базовый класс ‘Next’; производный класс ‘Last’ и функция int main().
// В базовом классе реализовать инициализацию переменной ‘w’ с типом данных unsigned.
// В производном классе реализовать инициализацию переменной ‘g’ с типом данных unsigned, а также выводятся значения обеих переменных.
// В функции int main() вводятся произвольные значения переменных. Результаты продемонстрировать на консоли.

#include <iostream>

class Next {
protected:
    unsigned int w;
public:
    Next(unsigned int w_val) : w(w_val) {}
};

class Last : public Next {
private:
    unsigned int g;
public:
    Last(unsigned int w_val, unsigned int g_val) : Next(w_val), g(g_val) {}

    void display() const {
        std::cout << "w= " << w << std::endl;
        std::cout << "g= " << g << std::endl;
    }
};

int main() {
    unsigned int input_w, input_g;
    std::cout << "Enter w: ";
    std::cin >> input_w;
    std::cout << "Enter g: ";
    std::cin >> input_g;

    Last obj(input_w, input_g);

    obj.display();

    return 0;
}