# desktop

zum ausführen auf linux:

    g++ -fPIC main.cpp -o qt_app `pkg-config --cflags --libs Qt5Widgets`

dann

    ./qt_app