/********************************************************************************
** Form generated from reading UI file 'symboleffectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMBOLEFFECTDIALOG_H
#define UI_SYMBOLEFFECTDIALOG_H

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

class Ui_symbolEffectDialog
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
    QLabel *label_2;
    QPushButton *pushButton_color;
    QComboBox *comboBox;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *symbolEffectDialog)
    {
        if (symbolEffectDialog->objectName().isEmpty())
            symbolEffectDialog->setObjectName(QStringLiteral("symbolEffectDialog"));
        symbolEffectDialog->resize(450, 431);
        symbolEffectDialog->setMinimumSize(QSize(450, 431));
        symbolEffectDialog->setMaximumSize(QSize(450, 431));
        buttonBox = new QDialogButtonBox(symbolEffectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(205, 391, 231, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(symbolEffectDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 250, 411));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QLatin1String("background-color: rgb(64, 64, 64);\n"
"border: 2px solid rgb(16, 16, 16);\n"
"border-radius: 4px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 231, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_left = new QPushButton(symbolEffectDialog);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setEnabled(false);
        pushButton_left->setGeometry(QRect(274, 302, 61, 41));
        pushButton_up = new QPushButton(symbolEffectDialog);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setEnabled(false);
        pushButton_up->setGeometry(QRect(325, 283, 61, 41));
        pushButton_down = new QPushButton(symbolEffectDialog);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setEnabled(false);
        pushButton_down->setGeometry(QRect(325, 321, 61, 41));
        pushButton_right = new QPushButton(symbolEffectDialog);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setEnabled(false);
        pushButton_right->setGeometry(QRect(376, 302, 61, 41));
        label_2 = new QLabel(symbolEffectDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 160, 91, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_color = new QPushButton(symbolEffectDialog);
        pushButton_color->setObjectName(QStringLiteral("pushButton_color"));
        pushButton_color->setGeometry(QRect(360, 160, 71, 21));
        pushButton_color->setStyleSheet(QStringLiteral("background-color: #ffffff"));
        comboBox = new QComboBox(symbolEffectDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(270, 60, 171, 22));
        pushButton_clear = new QPushButton(symbolEffectDialog);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(318, 240, 75, 23));

        retranslateUi(symbolEffectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), symbolEffectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), symbolEffectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(symbolEffectDialog);
    } // setupUi

    void retranslateUi(QDialog *symbolEffectDialog)
    {
        symbolEffectDialog->setWindowTitle(QApplication::translate("symbolEffectDialog", "Dialog", nullptr));
        pushButton_left->setText(QApplication::translate("symbolEffectDialog", "Left", nullptr));
        pushButton_up->setText(QApplication::translate("symbolEffectDialog", "Up", nullptr));
        pushButton_down->setText(QApplication::translate("symbolEffectDialog", "Down", nullptr));
        pushButton_right->setText(QApplication::translate("symbolEffectDialog", "Right", nullptr));
        label_2->setText(QApplication::translate("symbolEffectDialog", "Effect Color:", nullptr));
        pushButton_color->setText(QApplication::translate("symbolEffectDialog", "#ffffff", nullptr));
        comboBox->setItemText(0, QApplication::translate("symbolEffectDialog", "Select a symbol", nullptr));
        comboBox->setItemText(1, QApplication::translate("symbolEffectDialog", "Question Mark", nullptr));
        comboBox->setItemText(2, QApplication::translate("symbolEffectDialog", "Exclamation Mark", nullptr));
        comboBox->setItemText(3, QApplication::translate("symbolEffectDialog", "Dollar Sign", nullptr));
        comboBox->setItemText(4, QApplication::translate("symbolEffectDialog", "Percent Sign", nullptr));
        comboBox->setItemText(5, QApplication::translate("symbolEffectDialog", "Left Parenthesis", nullptr));
        comboBox->setItemText(6, QApplication::translate("symbolEffectDialog", "Right Parenthesis", nullptr));
        comboBox->setItemText(7, QApplication::translate("symbolEffectDialog", "Left Square Bracket", nullptr));
        comboBox->setItemText(8, QApplication::translate("symbolEffectDialog", "Right Square Bracket", nullptr));
        comboBox->setItemText(9, QApplication::translate("symbolEffectDialog", "Plus Sign", nullptr));
        comboBox->setItemText(10, QApplication::translate("symbolEffectDialog", "Minus Sign", nullptr));
        comboBox->setItemText(11, QApplication::translate("symbolEffectDialog", "Equals Sign", nullptr));
        comboBox->setItemText(12, QApplication::translate("symbolEffectDialog", "Up Caret", nullptr));
        comboBox->setItemText(13, QApplication::translate("symbolEffectDialog", "Left Caret", nullptr));
        comboBox->setItemText(14, QApplication::translate("symbolEffectDialog", "Right Caret", nullptr));
        comboBox->setItemText(15, QApplication::translate("symbolEffectDialog", "Left Hook Bracket", nullptr));
        comboBox->setItemText(16, QApplication::translate("symbolEffectDialog", "Right Hook Bracket", nullptr));
        comboBox->setItemText(17, QApplication::translate("symbolEffectDialog", "Forward Slash", nullptr));
        comboBox->setItemText(18, QApplication::translate("symbolEffectDialog", "Backward Slash", nullptr));
        comboBox->setItemText(19, QApplication::translate("symbolEffectDialog", "Semicolon", nullptr));
        comboBox->setItemText(20, QApplication::translate("symbolEffectDialog", "Colon", nullptr));
        comboBox->setItemText(21, QApplication::translate("symbolEffectDialog", "Asterisk", nullptr));
        comboBox->setItemText(22, QApplication::translate("symbolEffectDialog", "Bar", nullptr));
        comboBox->setItemText(23, QApplication::translate("symbolEffectDialog", "Tetris Piece I", nullptr));
        comboBox->setItemText(24, QApplication::translate("symbolEffectDialog", "Tetris Piece O", nullptr));
        comboBox->setItemText(25, QApplication::translate("symbolEffectDialog", "Tetris Piece T", nullptr));
        comboBox->setItemText(26, QApplication::translate("symbolEffectDialog", "Tetris Piece S", nullptr));
        comboBox->setItemText(27, QApplication::translate("symbolEffectDialog", "Tetris Piece Z", nullptr));
        comboBox->setItemText(28, QApplication::translate("symbolEffectDialog", "Tetris Piece J", nullptr));
        comboBox->setItemText(29, QApplication::translate("symbolEffectDialog", "Tetris Piece L", nullptr));

        pushButton_clear->setText(QApplication::translate("symbolEffectDialog", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class symbolEffectDialog: public Ui_symbolEffectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMBOLEFFECTDIALOG_H
