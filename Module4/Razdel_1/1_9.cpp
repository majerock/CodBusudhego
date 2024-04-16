//
// Created by sasha on 16.04.2024.
//Создать программу с использованием класса ‘CFile’. \
// При помощи данного класса создать текстовый файл с именем ‘example.txt’.
// В данный файл записать строку: “Hello, World!”, после чего закрыть файл.
#include <iostream>
#include <fstream>

class CFile {
private:
    std::ofstream file;
public:

    CFile(const char* filename) {
        file.open(filename);
    }

    void write(const std::string& data) {
        if (file.is_open()) { //
            file << data; //
        } else {
            std::cerr << "Err: file not open!" << std::endl;
        }
    }

    ~CFile() {
        if (file.is_open()) {
            file.close();
        }
    }
};

int main() {
    CFile myFile("example.txt");

    myFile.write("Hello, World!");

    return 0;
}