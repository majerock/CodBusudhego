//
// Created by sasha on 28.02.2024.
//
#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int* d (&a);
    int* e (&b);
    std::cout<< "a=" << *d << " b=" << *e ;

}