//
// Created by sasha on 14.04.2024.
//Создать программу с использованием фреймворка Qt, при помощи которой открывается окно с размерами 300x200, с кнопкой,
// на которую нанесена надпись: ‘Нажми меня’. При нажатии на кнопку появляется сообщение: ‘Вы нажали кнопку!’,
// после чего окно программы закроется.

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    QWidget window;
    window.setWindowTitle("Пример с кнопкой");
    window.setGeometry(100, 100, 300, 200); // Размеры окна


    QPushButton button("Нажми меня", &window);
    button.setGeometry(100, 80, 100, 30); // Размеры и положение кнопки


    QObject::connect(&button, &QPushButton::clicked, [&]() {
        QMessageBox::information(&window, "Сообщение", "Вы нажали кнопку!");
        window.close(); // Закрытие окна после нажатия на кнопку
    });

    window.show(); // Отображение окна

    return app.exec();
}