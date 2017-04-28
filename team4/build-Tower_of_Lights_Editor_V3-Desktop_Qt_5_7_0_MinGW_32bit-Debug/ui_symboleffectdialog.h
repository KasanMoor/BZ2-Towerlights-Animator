/********************************************************************************
** Form generated from reading UI file 'symboleffectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
        symbolEffectDialog->setWindowTitle(QApplication::translate("symbolEffectDialog", "Dialog", 0));
        pushButton_left->setText(QApplication::translate("symbolEffectDialog", "Left", 0));
        pushButton_up->setText(QApplication::translate("symbolEffectDialog", "Up", 0));
        pushButton_down->setText(QApplication::translate("symbolEffectDialog", "Down", 0));
        pushButton_right->setText(QApplication::translate("symbolEffectDialog", "Right", 0));
        label_2->setText(QApplication::translate("symbolEffectDialog", "Effect Color:", 0));
        pushButton_color->setText(QApplication::translate("symbolEffectDialog", "#ffffff", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("symbolEffectDialog", "Select a symbol", 0)
         << QApplication::translate("symbolEffectDialog", "Question Mark", 0)
         << QApplication::translate("symbolEffectDialog", "Exclamation Mark", 0)
         << QApplication::translate("symbolEffectDialog", "Dollar Sign", 0)
         << QApplication::translate("symbolEffectDialog", "Percent Sign", 0)
         << QApplication::translate("symbolEffectDialog", "Left Parenthesis", 0)
         << QApplication::translate("symbolEffectDialog", "Right Parenthesis", 0)
         << QApplication::translate("symbolEffectDialog", "Left Square Bracket", 0)
         << QApplication::translate("symbolEffectDialog", "Right Square Bracket", 0)
         << QApplication::translate("symbolEffectDialog", "Plus Sign", 0)
         << QApplication::translate("symbolEffectDialog", "Minus Sign", 0)
         << QApplication::translate("symbolEffectDialog", "Equals Sign", 0)
         << QApplication::translate("symbolEffectDialog", "Up Caret", 0)
         << QApplication::translate("symbolEffectDialog", "Left Caret", 0)
         << QApplication::translate("symbolEffectDialog", "Right Caret", 0)
         << QApplication::translate("symbolEffectDialog", "Left Hook Bracket", 0)
         << QApplication::translate("symbolEffectDialog", "Right Hook Bracket", 0)
         << QApplication::translate("symbolEffectDialog", "Forward Slash", 0)
         << QApplication::translate("symbolEffectDialog", "Backward Slash", 0)
         << QApplication::translate("symbolEffectDialog", "Semicolon", 0)
         << QApplication::translate("symbolEffectDialog", "Colon", 0)
         << QApplication::translate("symbolEffectDialog", "Asterisk", 0)
         << QApplication::translate("symbolEffectDialog", "Bar", 0)
         << QApplication::translate("symbolEffectDialog", "Tetris Piece I", 0)
         << QApplication::translate("symbolEffectDialog", "Tetris Piece O", 0)
         << QApplication::translate("symbolEffectDialog", "Tetris Piece T", 0)
         << QApplication::translate("symbolEffectDialog", "Tetris Piece S", 0)
         << QApplication::translate("symbolEffectDialog", "Tetris Piece Z", 0)
         << QApplication::translate("symbolEffectDialog", "Tetris Piece J", 0)
         << QApplication::translate("symbolEffectDialog", "Tetris Piece L", 0)
        );
        pushButton_clear->setText(QApplication::translate("symbolEffectDialog", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class symbolEffectDialog: public Ui_symbolEffectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMBOLEFFECTDIALOG_H
