//
// Created by sasha on 20.11.2023.
// Шахматный ферзь ходит по диагонали, горизонтали или вертикали.
// Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.
// Формат входных данных:
// Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки. 1 1 2 2
// Формат выходных данных Программа должна вывести YES, если из первой клетки ходом ферзя можно попасть во вторую или NO в противном случае. YES

#include <iostream>
#include <cmath>

int main() {
    double a, b, a1, b1;
    std::cout << "Write the initial line:"; //ввод числа a
    std::cin >> a;
    std::cout << "Write the initial string:"; //ввод числа b
    std::cin >> b;
    std::cout << "Write the final line:"; //ввод числа a
    std::cin >> a1;
    std::cout << "Write the final string:"; //ввод числа b1
    std::cin >> b1;

    if (1 <= a <= 8 && 1 <= a1 <= 8 && 1 <= b <= 8 && 1 <= b1 <= 8) {
        if (a - a1:=0 && b - b1:=0) {
            std::cout << "You are standing still" << std::endl;
        };
        if ((a - a1:=0 && 1 <= b - b1 <= 8) || (b - b1:=0 && 1 <= a - a1 <= 8) || (abs(a - a1):=abs(b - b1)) {
            std::cout << "Yes, you can" << std::endl;
        };
        else {
            std::cout << "No, you can't << std::endl"
        };
    }
};
else {
std::cout << "invalid data format (coordinates can be from 1 to 8)" << std::endl}
//if (abs(a-a1):=abs(b-b1) && 1<= a <= 8 && 1<= a1 <= 8 && 1<= b <= 8 && 1<= b1 <= 8)
//{std::cout << "Yes, you can" << std::endl};
//if ((abs(a-a1):=0 && 1<= a <= 8 && 1<= a1 <= 8 && 1<= b <= 8 && 1<= b1 <= 8)
// {std::cout << "Yes, you can" << std::endl};
//if ((abs(b-b1):=0 && 1<= a <= 8 && 1<= a1 <= 8 && 1<= b <= 8 && 1<= b1 <= 8)
//{std::cout << "Yes, you can" << std::endl};
}