/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_infoDialog
{
public:
    QPushButton *pushButton_close;
    QLabel *label;

    void setupUi(QDialog *infoDialog)
    {
        if (infoDialog->objectName().isEmpty())
            infoDialog->setObjectName(QStringLiteral("infoDialog"));
        infoDialog->resize(400, 300);
        infoDialog->setMinimumSize(QSize(400, 300));
        infoDialog->setMaximumSize(QSize(400, 300));
        pushButton_close = new QPushButton(infoDialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(140, 260, 121, 32));
        pushButton_close->setFocusPolicy(Qt::StrongFocus);
        label = new QLabel(infoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 381, 231));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(infoDialog);

        QMetaObject::connectSlotsByName(infoDialog);
    } // setupUi

    void retranslateUi(QDialog *infoDialog)
    {
        infoDialog->setWindowTitle(QApplication::translate("infoDialog", "Dialog", 0));
        pushButton_close->setText(QApplication::translate("infoDialog", "Close", 0));
        label->setText(QApplication::translate("infoDialog", "- You can click the \"L\" and \"R\" buttons to assign a color to the left or right mouse buttons.\n"
"\n"
"- By clicking a pixel with the left or right mouse button, you can color the pixel with the color assigned to that mouse button.\n"
"\n"
"- By double clicking a pixel, you can assign its color to the mouse button you double clicked with.\n"
"\n"
"- You can click on a thumbnail at the bottom of the screen to select that frame for editing.\n"
"\n"
"-A blank frame is appended to files if the last frame in the project is not a blank frame. This is so that the player does not cut off the last frame upon display", 0));
    } // retranslateUi

};

namespace Ui {
    class infoDialog: public Ui_infoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
