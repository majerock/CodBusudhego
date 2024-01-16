// Задание: Напишите программу, которая будет принимать на вход 1 число, записывать её в переменную x, и далее выдавать построчно результат применения на этой переменной следующих функций:
//* десятичный логарифм
//* натуральный логарифм
//* получение квадратного корня
//* возведение числа в степень 3
//* возведение числа в степень 0.3
//* округление в большую сторону
//* округление в меньшую сторону
//Пример работы:
//Введите значение: 10
//log10(10) = 1
//
//
#include <iostream>
#include <cmath>

int main(){
    double a;
    std::cout << "Write random number a:"; //ввод числа a
    std::cin >> a;
    if (a<0) {
        std::cout << "WARRING: Log , a^0.3 , sqrt(a)  NOT doesn't exist if a<0" << std::endl;
    }
    std::cout << "Log(10)=" << log10(a)<< std::endl;
    std::cout << "Log=" << log(a)<< std::endl;
    std::cout << "sqrt(a)=" << sqrt(a)<< std::endl;
    std::cout << "a^3=" << a*a*a << std::endl;
    std::cout << "a^0.3=" << pow(a,0.3)<< std::endl;
    std::cout << "okrug > storonu a^0.3=" << ceil(pow(a,0.3))<< std::endl;
    std::cout << "okrug < storonu a^0.3=" << floor(pow(a,0.3))<< std::endl;
}