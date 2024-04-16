//
// Created by sasha on 11.04.2024.
//Написать программу, в которой используются: базовый класс ‘Next’; производный класс ‘Last’ и функция int main().
// В базовом классе реализовать инициализацию переменной ‘str_1’ с типом данных string.
// В производном классе реализовать инициализацию переменной ‘str_2’ с типом данных string, а также выводятся значения обеих переменных.
// В функции int main() вводятся произвольные значения переменных.
// Результаты продемонстрировать на консоли.

#include <iostream>
#include <string>

class Next {
protected:
    std::string str_1;

public:

    Next(const std::string& str) : str_1(str) {}


    void printStr1() const {
        std::cout << "str_1: " << str_1 << std::endl;
    }
};

class Last : public Next {
private:
    std::string str_2;

public:
    Last(const std::string& str1, const std::string& str2) : Next(str1), str_2(str2) {}

    void printStr2() const {
        std::cout << "str_2: " << str_2 << std::endl;
    }
};

int main() {
    std::string strValue1, strValue2;
    std::cout << "Enter str_1: ";
    std::cin >> strValue1;
    std::cout << "Enter str_2: ";
    std::cin >> strValue2;

    Last obj(strValue1, strValue2);

    obj.printStr1();
    obj.printStr2();

    return 0;
}