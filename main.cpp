#include <QApplication>

#include "dialogs/passwordentrydialog.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    PasswordEntryDialog dialog(nullptr);
    dialog.exec();

    return app.exec();
}
