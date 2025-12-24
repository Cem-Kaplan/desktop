#include <QApplication>
#include <QPushButton>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Mein neues Fenster");
    window.resize(500,400);

    QPushButton button("Hallo Qt", &window);
    window.show();

    return app.exec();
}
