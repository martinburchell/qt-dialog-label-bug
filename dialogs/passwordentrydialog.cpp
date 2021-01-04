#include "passwordentrydialog.h"
#include <QDialogButtonBox>
#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>


PasswordEntryDialog::PasswordEntryDialog(QWidget* parent) :
    QDialog(parent)
{
    setMinimumWidth(400);
    setWindowTitle("Enter the password for the application");

    auto prompt = new QLabel("Enter the password in the box below:");
    prompt->setWordWrap(true);

    auto editor = new QLineEdit();
    editor->setEchoMode(QLineEdit::Password);

    auto buttonbox = new QDialogButtonBox(
                QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    connect(buttonbox, &QDialogButtonBox::accepted,
            this, &PasswordEntryDialog::accept);
    connect(buttonbox, &QDialogButtonBox::rejected,
            this, &PasswordEntryDialog::reject);

    auto mainlayout = new QFormLayout();
    mainlayout->setRowWrapPolicy(QFormLayout::WrapAllRows);
    mainlayout->addRow(prompt, editor);
    mainlayout->addWidget(buttonbox);
    setLayout(mainlayout);
}
