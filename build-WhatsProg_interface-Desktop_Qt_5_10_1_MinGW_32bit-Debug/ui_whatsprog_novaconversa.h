/********************************************************************************
** Form generated from reading UI file 'whatsprog_novaconversa.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHATSPROG_NOVACONVERSA_H
#define UI_WHATSPROG_NOVACONVERSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_WhatsProgNovaConversa
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelConversa;
    QLineEdit *lineEditConversa;

    void setupUi(QDialog *WhatsProgNovaConversa)
    {
        if (WhatsProgNovaConversa->objectName().isEmpty())
            WhatsProgNovaConversa->setObjectName(QStringLiteral("WhatsProgNovaConversa"));
        WhatsProgNovaConversa->resize(210, 110);
        buttonBox = new QDialogButtonBox(WhatsProgNovaConversa);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-140, 60, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        labelConversa = new QLabel(WhatsProgNovaConversa);
        labelConversa->setObjectName(QStringLiteral("labelConversa"));
        labelConversa->setGeometry(QRect(10, 10, 51, 16));
        lineEditConversa = new QLineEdit(WhatsProgNovaConversa);
        lineEditConversa->setObjectName(QStringLiteral("lineEditConversa"));
        lineEditConversa->setGeometry(QRect(80, 10, 120, 20));

        retranslateUi(WhatsProgNovaConversa);
        QObject::connect(buttonBox, SIGNAL(accepted()), WhatsProgNovaConversa, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WhatsProgNovaConversa, SLOT(reject()));

        QMetaObject::connectSlotsByName(WhatsProgNovaConversa);
    } // setupUi

    void retranslateUi(QDialog *WhatsProgNovaConversa)
    {
        WhatsProgNovaConversa->setWindowTitle(QApplication::translate("WhatsProgNovaConversa", "Nova Conversa", nullptr));
        labelConversa->setText(QApplication::translate("WhatsProgNovaConversa", "Conversa:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WhatsProgNovaConversa: public Ui_WhatsProgNovaConversa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHATSPROG_NOVACONVERSA_H
