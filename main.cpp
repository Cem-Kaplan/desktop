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
    
    QLabel ueberschrift("Optionen", &window);
    QLabel label("In Bearbeitung", &window);
    
    QPushButton button1("Information", &window);
    QPushButton button2("Information", &window);
    
    label.move(450, 300);
    label.setStyleSheet("font-size: 17px");
    ueberschrift.move(10, 10);
    ueberschrift.setStyleSheet("font-size: 25px");

    button1.move(10, 70);
    button2.move(10, 120);

    window.show();


    return app.exec();
}
