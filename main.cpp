#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QMessageBox>
#include <QLabel>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.resize(1000,750);
    window.setWindowTitle("Desktop App von Cem");

    QLabel label("In Bearbeitung", &window);
    label.move(450, 300);
    label.setStyleSheet("font-size: 17px");

    window.show();


    return app.exec();
}
