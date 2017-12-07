/********************************************************************************
** Form generated from reading UI file 'lettereffectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LETTEREFFECTDIALOG_H
#define UI_LETTEREFFECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_letterEffectDialog
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_left;
    QPushButton *pushButton_up;
    QPushButton *pushButton_down;
    QPushButton *pushButton_right;
    QLabel *labelLetterSelect;
    QLabel *labelLetterColor;
    QPushButton *btnLetterColor;
    QComboBox *comboLetter;
    QPushButton *pushButton_upleft;
    QPushButton *pushButton_upright;
    QPushButton *pushButton_downright;
    QPushButton *pushButton_downleft;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *letterEffectDialog)
    {
        if (letterEffectDialog->objectName().isEmpty())
            letterEffectDialog->setObjectName(QStringLiteral("letterEffectDialog"));
        letterEffectDialog->resize(631, 570);
        letterEffectDialog->setMinimumSize(QSize(631, 570));
        letterEffectDialog->setMaximumSize(QSize(631, 570));
        buttonBox = new QDialogButtonBox(letterEffectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(360, 500, 271, 61));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        frame = new QFrame(letterEffectDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 341, 551));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFocusPolicy(Qt::StrongFocus);
        frame->setStyleSheet(QLatin1String("background-color: rgb(64, 64, 64);\n"
"border: 2px solid rgb(16, 16, 16);\n"
"border-radius: 4px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 321, 531));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        pushButton_left = new QPushButton(letterEffectDialog);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setEnabled(true);
        pushButton_left->setGeometry(QRect(420, 250, 51, 41));
        pushButton_left->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/arrows_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_left->setIcon(icon);
        pushButton_up = new QPushButton(letterEffectDialog);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setEnabled(true);
        pushButton_up->setGeometry(QRect(470, 210, 51, 41));
        pushButton_up->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/arrows_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_up->setIcon(icon1);
        pushButton_down = new QPushButton(letterEffectDialog);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setEnabled(true);
        pushButton_down->setGeometry(QRect(470, 290, 51, 41));
        pushButton_down->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/arrows_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_down->setIcon(icon2);
        pushButton_right = new QPushButton(letterEffectDialog);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setEnabled(true);
        pushButton_right->setGeometry(QRect(520, 250, 51, 41));
        pushButton_right->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/arrows_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_right->setIcon(icon3);
        labelLetterSelect = new QLabel(letterEffectDialog);
        labelLetterSelect->setObjectName(QStringLiteral("labelLetterSelect"));
        labelLetterSelect->setGeometry(QRect(380, 30, 151, 41));
        labelLetterSelect->setScaledContents(true);
        labelLetterSelect->setTextInteractionFlags(Qt::NoTextInteraction);
        labelLetterColor = new QLabel(letterEffectDialog);
        labelLetterColor->setObjectName(QStringLiteral("labelLetterColor"));
        labelLetterColor->setGeometry(QRect(380, 100, 151, 51));
        labelLetterColor->setTextFormat(Qt::RichText);
        labelLetterColor->setScaledContents(true);
        labelLetterColor->setTextInteractionFlags(Qt::NoTextInteraction);
        btnLetterColor = new QPushButton(letterEffectDialog);
        btnLetterColor->setObjectName(QStringLiteral("btnLetterColor"));
        btnLetterColor->setGeometry(QRect(540, 100, 61, 51));
        btnLetterColor->setStyleSheet(QStringLiteral("background-color: #ffffff"));
        comboLetter = new QComboBox(letterEffectDialog);
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->addItem(QString());
        comboLetter->setObjectName(QStringLiteral("comboLetter"));
        comboLetter->setGeometry(QRect(540, 40, 61, 31));
        comboLetter->setMaxCount(1024);
        comboLetter->setFrame(false);
        pushButton_upleft = new QPushButton(letterEffectDialog);
        pushButton_upleft->setObjectName(QStringLiteral("pushButton_upleft"));
        pushButton_upleft->setGeometry(QRect(430, 220, 41, 31));
        pushButton_upleft->setAutoFillBackground(false);
        pushButton_upleft->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/arrows_upleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_upleft->setIcon(icon4);
        pushButton_upright = new QPushButton(letterEffectDialog);
        pushButton_upright->setObjectName(QStringLiteral("pushButton_upright"));
        pushButton_upright->setGeometry(QRect(520, 220, 41, 31));
        pushButton_upright->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/arrows_upright.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_upright->setIcon(icon5);
        pushButton_downright = new QPushButton(letterEffectDialog);
        pushButton_downright->setObjectName(QStringLiteral("pushButton_downright"));
        pushButton_downright->setGeometry(QRect(520, 290, 41, 31));
        pushButton_downright->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/arrows_downright.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_downright->setIcon(icon6);
        pushButton_downleft = new QPushButton(letterEffectDialog);
        pushButton_downleft->setObjectName(QStringLiteral("pushButton_downleft"));
        pushButton_downleft->setGeometry(QRect(429, 290, 41, 31));
        pushButton_downleft->setStyleSheet(QStringLiteral("background-color: rgb(128,128,128);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/arrows_downleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_downleft->setIcon(icon7);
        pushButton_clear = new QPushButton(letterEffectDialog);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(318, 240, 75, 23));

        retranslateUi(letterEffectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), letterEffectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), letterEffectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(letterEffectDialog);
    } // setupUi

    void retranslateUi(QDialog *letterEffectDialog)
    {
        letterEffectDialog->setWindowTitle(QApplication::translate("letterEffectDialog", "Dialog", nullptr));
        pushButton_left->setText(QString());
        pushButton_up->setText(QString());
        pushButton_down->setText(QString());
        pushButton_right->setText(QString());
        labelLetterSelect->setText(QApplication::translate("letterEffectDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">Select a letter:</span></p></body></html>", nullptr));
        labelLetterColor->setText(QApplication::translate("letterEffectDialog", "<html><head/><body><p><span style=\" font-size:10pt;\">Letter color:</span></p></body></html>", nullptr));
        btnLetterColor->setText(QString());
        comboLetter->setItemText(0, QApplication::translate("letterEffectDialog", "...", nullptr));
        comboLetter->setItemText(1, QApplication::translate("letterEffectDialog", "A", nullptr));
        comboLetter->setItemText(2, QApplication::translate("letterEffectDialog", "B", nullptr));
        comboLetter->setItemText(3, QApplication::translate("letterEffectDialog", "C", nullptr));
        comboLetter->setItemText(4, QApplication::translate("letterEffectDialog", "D", nullptr));
        comboLetter->setItemText(5, QApplication::translate("letterEffectDialog", "E", nullptr));
        comboLetter->setItemText(6, QApplication::translate("letterEffectDialog", "F", nullptr));
        comboLetter->setItemText(7, QApplication::translate("letterEffectDialog", "G", nullptr));
        comboLetter->setItemText(8, QApplication::translate("letterEffectDialog", "H", nullptr));
        comboLetter->setItemText(9, QApplication::translate("letterEffectDialog", "I", nullptr));
        comboLetter->setItemText(10, QApplication::translate("letterEffectDialog", "J", nullptr));
        comboLetter->setItemText(11, QApplication::translate("letterEffectDialog", "K", nullptr));
        comboLetter->setItemText(12, QApplication::translate("letterEffectDialog", "L", nullptr));
        comboLetter->setItemText(13, QApplication::translate("letterEffectDialog", "M", nullptr));
        comboLetter->setItemText(14, QApplication::translate("letterEffectDialog", "N", nullptr));
        comboLetter->setItemText(15, QApplication::translate("letterEffectDialog", "O", nullptr));
        comboLetter->setItemText(16, QApplication::translate("letterEffectDialog", "P", nullptr));
        comboLetter->setItemText(17, QApplication::translate("letterEffectDialog", "Q", nullptr));
        comboLetter->setItemText(18, QApplication::translate("letterEffectDialog", "R", nullptr));
        comboLetter->setItemText(19, QApplication::translate("letterEffectDialog", "S", nullptr));
        comboLetter->setItemText(20, QApplication::translate("letterEffectDialog", "T", nullptr));
        comboLetter->setItemText(21, QApplication::translate("letterEffectDialog", "U", nullptr));
        comboLetter->setItemText(22, QApplication::translate("letterEffectDialog", "V", nullptr));
        comboLetter->setItemText(23, QApplication::translate("letterEffectDialog", "W", nullptr));
        comboLetter->setItemText(24, QApplication::translate("letterEffectDialog", "X", nullptr));
        comboLetter->setItemText(25, QApplication::translate("letterEffectDialog", "Y", nullptr));
        comboLetter->setItemText(26, QApplication::translate("letterEffectDialog", "Z", nullptr));
        comboLetter->setItemText(27, QApplication::translate("letterEffectDialog", "a", nullptr));
        comboLetter->setItemText(28, QApplication::translate("letterEffectDialog", "b", nullptr));
        comboLetter->setItemText(29, QApplication::translate("letterEffectDialog", "c", nullptr));
        comboLetter->setItemText(30, QApplication::translate("letterEffectDialog", "d", nullptr));
        comboLetter->setItemText(31, QApplication::translate("letterEffectDialog", "e", nullptr));
        comboLetter->setItemText(32, QApplication::translate("letterEffectDialog", "f", nullptr));
        comboLetter->setItemText(33, QApplication::translate("letterEffectDialog", "g", nullptr));
        comboLetter->setItemText(34, QApplication::translate("letterEffectDialog", "h", nullptr));
        comboLetter->setItemText(35, QApplication::translate("letterEffectDialog", "i", nullptr));
        comboLetter->setItemText(36, QApplication::translate("letterEffectDialog", "j", nullptr));
        comboLetter->setItemText(37, QApplication::translate("letterEffectDialog", "k", nullptr));
        comboLetter->setItemText(38, QApplication::translate("letterEffectDialog", "l", nullptr));
        comboLetter->setItemText(39, QApplication::translate("letterEffectDialog", "m", nullptr));
        comboLetter->setItemText(40, QApplication::translate("letterEffectDialog", "n", nullptr));
        comboLetter->setItemText(41, QApplication::translate("letterEffectDialog", "o", nullptr));
        comboLetter->setItemText(42, QApplication::translate("letterEffectDialog", "p", nullptr));
        comboLetter->setItemText(43, QApplication::translate("letterEffectDialog", "q", nullptr));
        comboLetter->setItemText(44, QApplication::translate("letterEffectDialog", "r", nullptr));
        comboLetter->setItemText(45, QApplication::translate("letterEffectDialog", "s", nullptr));
        comboLetter->setItemText(46, QApplication::translate("letterEffectDialog", "t", nullptr));
        comboLetter->setItemText(47, QApplication::translate("letterEffectDialog", "u", nullptr));
        comboLetter->setItemText(48, QApplication::translate("letterEffectDialog", "v", nullptr));
        comboLetter->setItemText(49, QApplication::translate("letterEffectDialog", "w", nullptr));
        comboLetter->setItemText(50, QApplication::translate("letterEffectDialog", "x", nullptr));
        comboLetter->setItemText(51, QApplication::translate("letterEffectDialog", "y", nullptr));
        comboLetter->setItemText(52, QApplication::translate("letterEffectDialog", "z", nullptr));

        pushButton_upleft->setText(QString());
        pushButton_upright->setText(QString());
        pushButton_downright->setText(QString());
        pushButton_downleft->setText(QString());
        pushButton_clear->setText(QApplication::translate("letterEffectDialog", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class letterEffectDialog: public Ui_letterEffectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LETTEREFFECTDIALOG_H
