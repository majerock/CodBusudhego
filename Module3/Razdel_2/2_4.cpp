//
// Created by sasha on 22.03.2024.
//Написать программу, в которой используется библиотека <cmath>.
// При помощи данной библиотеки необходимо найти значения синусов углов pi/6 и pi/8.
// Число pi необходимо задать в виде числа 3.14.
// Значения углов задаются уникальными переменными с типом данных double.
// На консоль вывести только значения синусов данных углов.

#include <iostream>
#include <cmath>

int main() {
    double pi = 3.14;
    double angle1 = pi / 6;
    double angle2 = pi / 8;

    double sin_angle1 = sin(angle1);
    double sin_angle2 = sin(angle2);

    std::cout << "Sin angle pi/6: " << sin_angle1 << std::endl;
    std::cout << "Sin angle pi/8: " << sin_angle2 << std::endl;

    return 0;
}
