/********************************************************************************
** Form generated from reading UI file 'whatsprog_login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHATSPROG_LOGIN_H
#define UI_WHATSPROG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_WhatsProgLogin
{
public:
    QGridLayout *gridLayout;
    QLabel *labelIpServidor;
    QLineEdit *lineEditIpServidor;
    QLabel *labelNomeUsuario;
    QLineEdit *lineEditNomeUsuario;
    QLabel *labelSenhaUsuario;
    QLineEdit *lineEditSenhaUsuario;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WhatsProgLogin)
    {
        if (WhatsProgLogin->objectName().isEmpty())
            WhatsProgLogin->setObjectName(QStringLiteral("WhatsProgLogin"));
        WhatsProgLogin->resize(248, 125);
        gridLayout = new QGridLayout(WhatsProgLogin);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelIpServidor = new QLabel(WhatsProgLogin);
        labelIpServidor->setObjectName(QStringLiteral("labelIpServidor"));

        gridLayout->addWidget(labelIpServidor, 0, 0, 1, 1);

        lineEditIpServidor = new QLineEdit(WhatsProgLogin);
        lineEditIpServidor->setObjectName(QStringLiteral("lineEditIpServidor"));

        gridLayout->addWidget(lineEditIpServidor, 0, 1, 1, 1);

        labelNomeUsuario = new QLabel(WhatsProgLogin);
        labelNomeUsuario->setObjectName(QStringLiteral("labelNomeUsuario"));

        gridLayout->addWidget(labelNomeUsuario, 1, 0, 1, 1);

        lineEditNomeUsuario = new QLineEdit(WhatsProgLogin);
        lineEditNomeUsuario->setObjectName(QStringLiteral("lineEditNomeUsuario"));

        gridLayout->addWidget(lineEditNomeUsuario, 1, 1, 1, 1);

        labelSenhaUsuario = new QLabel(WhatsProgLogin);
        labelSenhaUsuario->setObjectName(QStringLiteral("labelSenhaUsuario"));

        gridLayout->addWidget(labelSenhaUsuario, 2, 0, 1, 1);

        lineEditSenhaUsuario = new QLineEdit(WhatsProgLogin);
        lineEditSenhaUsuario->setObjectName(QStringLiteral("lineEditSenhaUsuario"));

        gridLayout->addWidget(lineEditSenhaUsuario, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(WhatsProgLogin);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(WhatsProgLogin);
        QObject::connect(buttonBox, SIGNAL(accepted()), WhatsProgLogin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WhatsProgLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(WhatsProgLogin);
    } // setupUi

    void retranslateUi(QDialog *WhatsProgLogin)
    {
        WhatsProgLogin->setWindowTitle(QApplication::translate("WhatsProgLogin", "MUDE TITULO - Criar ou conectar?", nullptr));
        labelIpServidor->setText(QApplication::translate("WhatsProgLogin", "Servidor (IP):", nullptr));
        labelNomeUsuario->setText(QApplication::translate("WhatsProgLogin", "Usuario", nullptr));
        labelSenhaUsuario->setText(QApplication::translate("WhatsProgLogin", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WhatsProgLogin: public Ui_WhatsProgLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHATSPROG_LOGIN_H
