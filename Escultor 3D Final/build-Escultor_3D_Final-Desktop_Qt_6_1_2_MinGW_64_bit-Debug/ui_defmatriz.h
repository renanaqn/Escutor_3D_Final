/********************************************************************************
** Form generated from reading UI file 'defmatriz.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFMATRIZ_H
#define UI_DEFMATRIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DefMatriz
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox_x;
    QSpinBox *spinBox_y;
    QSpinBox *spinBox_z;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *DefMatriz)
    {
        if (DefMatriz->objectName().isEmpty())
            DefMatriz->setObjectName(QString::fromUtf8("DefMatriz"));
        DefMatriz->resize(190, 167);
        buttonBox = new QDialogButtonBox(DefMatriz);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 130, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox_x = new QSpinBox(DefMatriz);
        spinBox_x->setObjectName(QString::fromUtf8("spinBox_x"));
        spinBox_x->setGeometry(QRect(80, 10, 42, 31));
        spinBox_y = new QSpinBox(DefMatriz);
        spinBox_y->setObjectName(QString::fromUtf8("spinBox_y"));
        spinBox_y->setGeometry(QRect(80, 50, 42, 31));
        spinBox_z = new QSpinBox(DefMatriz);
        spinBox_z->setObjectName(QString::fromUtf8("spinBox_z"));
        spinBox_z->setGeometry(QRect(80, 90, 42, 31));
        label = new QLabel(DefMatriz);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 16, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(DefMatriz);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 60, 16, 16));
        label_2->setFont(font);
        label_3 = new QLabel(DefMatriz);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 100, 16, 16));
        label_3->setFont(font);

        retranslateUi(DefMatriz);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DefMatriz, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DefMatriz, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DefMatriz);
    } // setupUi

    void retranslateUi(QDialog *DefMatriz)
    {
        DefMatriz->setWindowTitle(QCoreApplication::translate("DefMatriz", "Qual o tamanho?", nullptr));
        label->setText(QCoreApplication::translate("DefMatriz", "X", nullptr));
        label_2->setText(QCoreApplication::translate("DefMatriz", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("DefMatriz", "Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DefMatriz: public Ui_DefMatriz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFMATRIZ_H
