#include "visual.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Visual w;
    w.show();
    return app.exec();
}
