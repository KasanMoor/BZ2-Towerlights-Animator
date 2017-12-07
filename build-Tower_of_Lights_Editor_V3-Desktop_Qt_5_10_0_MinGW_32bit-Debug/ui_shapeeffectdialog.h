/********************************************************************************
** Form generated from reading UI file 'shapeeffectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPEEFFECTDIALOG_H
#define UI_SHAPEEFFECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_shapeEffectDialog
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
    QCheckBox *noFill;
    QPushButton *pushButton_color_2;
    QComboBox *comboBox;
    QPushButton *pushButton_color;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *shapeEffectDialog)
    {
        if (shapeEffectDialog->objectName().isEmpty())
            shapeEffectDialog->setObjectName(QStringLiteral("shapeEffectDialog"));
        shapeEffectDialog->resize(450, 431);
        shapeEffectDialog->setMinimumSize(QSize(450, 431));
        shapeEffectDialog->setMaximumSize(QSize(450, 431));
        buttonBox = new QDialogButtonBox(shapeEffectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(205, 391, 231, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(shapeEffectDialog);
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
        pushButton_left = new QPushButton(shapeEffectDialog);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setEnabled(false);
        pushButton_left->setGeometry(QRect(274, 302, 61, 41));
        pushButton_up = new QPushButton(shapeEffectDialog);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setEnabled(false);
        pushButton_up->setGeometry(QRect(325, 283, 61, 41));
        pushButton_down = new QPushButton(shapeEffectDialog);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setEnabled(false);
        pushButton_down->setGeometry(QRect(325, 321, 61, 41));
        pushButton_right = new QPushButton(shapeEffectDialog);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setEnabled(false);
        pushButton_right->setGeometry(QRect(376, 302, 61, 41));
        noFill = new QCheckBox(shapeEffectDialog);
        noFill->setObjectName(QStringLiteral("noFill"));
        noFill->setGeometry(QRect(320, 105, 70, 17));
        pushButton_color_2 = new QPushButton(shapeEffectDialog);
        pushButton_color_2->setObjectName(QStringLiteral("pushButton_color_2"));
        pushButton_color_2->setGeometry(QRect(360, 160, 71, 21));
        pushButton_color_2->setStyleSheet(QStringLiteral("background-color: #ffffff"));
        comboBox = new QComboBox(shapeEffectDialog);
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
        comboBox->setGeometry(QRect(270, 50, 171, 22));
        pushButton_color = new QPushButton(shapeEffectDialog);
        pushButton_color->setObjectName(QStringLiteral("pushButton_color"));
        pushButton_color->setGeometry(QRect(360, 200, 71, 21));
        pushButton_color->setStyleSheet(QStringLiteral("background-color: #ffffff"));
        label_3 = new QLabel(shapeEffectDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 160, 91, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(shapeEffectDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 200, 91, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_clear = new QPushButton(shapeEffectDialog);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(318, 240, 75, 23));

        retranslateUi(shapeEffectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), shapeEffectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), shapeEffectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(shapeEffectDialog);
    } // setupUi

    void retranslateUi(QDialog *shapeEffectDialog)
    {
        shapeEffectDialog->setWindowTitle(QApplication::translate("shapeEffectDialog", "Dialog", nullptr));
        pushButton_left->setText(QApplication::translate("shapeEffectDialog", "Left", nullptr));
        pushButton_up->setText(QApplication::translate("shapeEffectDialog", "Up", nullptr));
        pushButton_down->setText(QApplication::translate("shapeEffectDialog", "Down", nullptr));
        pushButton_right->setText(QApplication::translate("shapeEffectDialog", "Right", nullptr));
        noFill->setText(QApplication::translate("shapeEffectDialog", "No Fill", nullptr));
        pushButton_color_2->setText(QApplication::translate("shapeEffectDialog", "#ffffff", nullptr));
        comboBox->setItemText(0, QApplication::translate("shapeEffectDialog", "Select a shape", nullptr));
        comboBox->setItemText(1, QApplication::translate("shapeEffectDialog", "Circle", nullptr));
        comboBox->setItemText(2, QApplication::translate("shapeEffectDialog", "Square", nullptr));
        comboBox->setItemText(3, QApplication::translate("shapeEffectDialog", "Vertical Rectangle", nullptr));
        comboBox->setItemText(4, QApplication::translate("shapeEffectDialog", "Horizontal Rectangle", nullptr));
        comboBox->setItemText(5, QApplication::translate("shapeEffectDialog", "L-Shape", nullptr));
        comboBox->setItemText(6, QApplication::translate("shapeEffectDialog", "Mirrored L-Shape", nullptr));
        comboBox->setItemText(7, QApplication::translate("shapeEffectDialog", "S-Shape", nullptr));
        comboBox->setItemText(8, QApplication::translate("shapeEffectDialog", "Z-Shape", nullptr));
        comboBox->setItemText(9, QApplication::translate("shapeEffectDialog", "T-Shape", nullptr));
        comboBox->setItemText(10, QApplication::translate("shapeEffectDialog", "Box", nullptr));
        comboBox->setItemText(11, QApplication::translate("shapeEffectDialog", "Line", nullptr));

        pushButton_color->setText(QApplication::translate("shapeEffectDialog", "#ffffff", nullptr));
        label_3->setText(QApplication::translate("shapeEffectDialog", "Border Color:", nullptr));
        label_2->setText(QApplication::translate("shapeEffectDialog", "Fill Color:", nullptr));
        pushButton_clear->setText(QApplication::translate("shapeEffectDialog", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shapeEffectDialog: public Ui_shapeEffectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPEEFFECTDIALOG_H
