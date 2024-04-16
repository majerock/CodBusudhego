//
// Created by sasha on 11.04.2024.
//Создать программу с использованием производного класса с именем ‘MyObject’ от основного класса ‘CObject’.


#include <iostream>

class CObject {
public:
    void display() {
        std::cout << "This object in class CObject" << std::endl;
    }
};

class MyObject : public CObject {
public:
    void show() {
        std::cout << "This object in class MyObject" << std::endl;
    }
};

int main() {
    CObject obj1;
    MyObject obj2;

    obj1.display();

    obj2.display();

    obj2.show();

    return 0;
}