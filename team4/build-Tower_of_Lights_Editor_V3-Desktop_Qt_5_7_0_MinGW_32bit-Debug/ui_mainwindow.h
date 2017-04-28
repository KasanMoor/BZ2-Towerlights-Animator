/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QPushButton *pushButton_l;
    QPushButton *pushButton_r;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QPushButton *pushButton_redo;
    QPushButton *pushButton_undo;
    QPushButton *pushButton_prev;
    QPushButton *pushButton_clearFrame;
    QLabel *label_7;
    QPushButton *pushButton_changeAudioFile;
    QLabel *label_8;
    QSpinBox *spinBox;
    QLabel *label_9;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QLabel *label_5;
    QPushButton *pushButton_new;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_preview;
    QPushButton *pushButton_next;
    QPushButton *pushButton_copyNew;
    QPushButton *pushButton_left;
    QPushButton *pushButton_down;
    QPushButton *pushButton_right;
    QPushButton *pushButton_up;
    QCheckBox *checkBox;
    QPushButton *pushButton_upright;
    QPushButton *pushButton_downright;
    QPushButton *pushButton_upleft;
    QPushButton *pushButton_downleft;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(754, 686);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(754, 686));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 742, 497));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        scrollArea_3 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea_3->sizePolicy().hasHeightForWidth());
        scrollArea_3->setSizePolicy(sizePolicy1);
        scrollArea_3->setMinimumSize(QSize(200, 472));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 198, 471));
        pushButton_l = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));
        pushButton_l->setGeometry(QRect(10, 30, 81, 81));
        QFont font;
        font.setPointSize(40);
        pushButton_l->setFont(font);
        pushButton_l->setStyleSheet(QStringLiteral(""));
        pushButton_r = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_r->setObjectName(QStringLiteral("pushButton_r"));
        pushButton_r->setGeometry(QRect(110, 30, 81, 81));
        pushButton_r->setFont(font);
        label_2 = new QLabel(scrollAreaWidgetContents_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 81, 21));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(scrollAreaWidgetContents_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 110, 81, 21));
        label_3->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(scrollAreaWidgetContents_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 327, 101, 21));
        label_6->setAlignment(Qt::AlignCenter);
        pushButton_redo = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_redo->setObjectName(QStringLiteral("pushButton_redo"));
        pushButton_redo->setGeometry(QRect(110, 450, 81, 41));
        pushButton_undo = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_undo->setObjectName(QStringLiteral("pushButton_undo"));
        pushButton_undo->setGeometry(QRect(10, 450, 81, 41));
        pushButton_undo->setStyleSheet(QStringLiteral(""));
        pushButton_prev = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_prev->setObjectName(QStringLiteral("pushButton_prev"));
        pushButton_prev->setGeometry(QRect(40, 130, 120, 200));
        pushButton_prev->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_clearFrame = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_clearFrame->setObjectName(QStringLiteral("pushButton_clearFrame"));
        pushButton_clearFrame->setGeometry(QRect(10, 410, 181, 41));
        pushButton_clearFrame->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(scrollAreaWidgetContents_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 8, 181, 21));
        QFont font1;
        font1.setPointSize(13);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        pushButton_changeAudioFile = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_changeAudioFile->setObjectName(QStringLiteral("pushButton_changeAudioFile"));
        pushButton_changeAudioFile->setGeometry(QRect(10, 371, 181, 41));
        label_8 = new QLabel(scrollAreaWidgetContents_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(17, 350, 91, 16));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox = new QSpinBox(scrollAreaWidgetContents_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(107, 348, 51, 24));
        spinBox->setMinimumSize(QSize(20, 24));
        spinBox->setMinimum(25);
        spinBox->setMaximum(1000000);
        label_9 = new QLabel(scrollAreaWidgetContents_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(157, 349, 31, 21));
        label_9->setAlignment(Qt::AlignCenter);
        scrollArea_3->setWidget(scrollAreaWidgetContents_4);

        horizontalLayout_3->addWidget(scrollArea_3);

        scrollArea_4 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setMinimumSize(QSize(120, 200));
        scrollArea_4->setMaximumSize(QSize(16777215, 16777215));
        scrollArea_4->setStyleSheet(QLatin1String("background-color: rgb(64, 64, 64);\n"
"border: 2px solid rgb(16, 16, 16);\n"
"border-radius: 4px;"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 294, 469));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        horizontalLayout_3->addWidget(scrollArea_4);

        scrollArea_5 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        sizePolicy1.setHeightForWidth(scrollArea_5->sizePolicy().hasHeightForWidth());
        scrollArea_5->setSizePolicy(sizePolicy1);
        scrollArea_5->setMinimumSize(QSize(200, 472));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 198, 471));
        label_5 = new QLabel(scrollAreaWidgetContents_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 327, 101, 21));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_new = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_new->setObjectName(QStringLiteral("pushButton_new"));
        pushButton_new->setGeometry(QRect(10, 10, 181, 41));
        pushButton_new->setStyleSheet(QStringLiteral(""));
        pushButton_delete = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setEnabled(false);
        pushButton_delete->setGeometry(QRect(10, 90, 181, 41));
        pushButton_delete->setStyleSheet(QStringLiteral(""));
        pushButton_preview = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_preview->setObjectName(QStringLiteral("pushButton_preview"));
        pushButton_preview->setEnabled(true);
        pushButton_preview->setGeometry(QRect(10, 450, 181, 41));
        pushButton_next = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(40, 130, 120, 200));
        pushButton_next->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_copyNew = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_copyNew->setObjectName(QStringLiteral("pushButton_copyNew"));
        pushButton_copyNew->setGeometry(QRect(10, 50, 181, 41));
        pushButton_copyNew->setStyleSheet(QStringLiteral(""));
        pushButton_left = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setEnabled(true);
        pushButton_left->setGeometry(QRect(28, 385, 25, 25));
        pushButton_left->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/dark_arrows_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_left->setIcon(icon);
        pushButton_left->setIconSize(QSize(24, 24));
        pushButton_down = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setEnabled(true);
        pushButton_down->setGeometry(QRect(88, 418, 25, 25));
        pushButton_down->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/dark_arrows_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_down->setIcon(icon1);
        pushButton_down->setIconSize(QSize(24, 24));
        pushButton_right = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setEnabled(true);
        pushButton_right->setGeometry(QRect(148, 385, 25, 25));
        pushButton_right->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/dark_arrows_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_right->setIcon(icon2);
        pushButton_right->setIconSize(QSize(24, 24));
        pushButton_up = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setEnabled(true);
        pushButton_up->setGeometry(QRect(88, 352, 25, 25));
        pushButton_up->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/dark_arrows_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_up->setIcon(icon3);
        pushButton_up->setIconSize(QSize(24, 24));
        checkBox = new QCheckBox(scrollAreaWidgetContents_6);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(54, 387, 101, 20));
        checkBox->setChecked(true);
        pushButton_upright = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_upright->setObjectName(QStringLiteral("pushButton_upright"));
        pushButton_upright->setEnabled(true);
        pushButton_upright->setGeometry(QRect(118, 357, 25, 25));
        pushButton_upright->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/dark_arrows_upright.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_upright->setIcon(icon4);
        pushButton_upright->setIconSize(QSize(24, 24));
        pushButton_downright = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_downright->setObjectName(QStringLiteral("pushButton_downright"));
        pushButton_downright->setEnabled(true);
        pushButton_downright->setGeometry(QRect(118, 413, 25, 25));
        pushButton_downright->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/dark_arrows_downright.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_downright->setIcon(icon5);
        pushButton_downright->setIconSize(QSize(24, 24));
        pushButton_upleft = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_upleft->setObjectName(QStringLiteral("pushButton_upleft"));
        pushButton_upleft->setEnabled(true);
        pushButton_upleft->setGeometry(QRect(58, 357, 25, 25));
        pushButton_upleft->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/dark_arrows_upleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_upleft->setIcon(icon6);
        pushButton_upleft->setIconSize(QSize(24, 24));
        pushButton_downleft = new QPushButton(scrollAreaWidgetContents_6);
        pushButton_downleft->setObjectName(QStringLiteral("pushButton_downleft"));
        pushButton_downleft->setEnabled(true);
        pushButton_downleft->setGeometry(QRect(58, 413, 25, 25));
        pushButton_downleft->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/dark_arrows_downleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_downleft->setIcon(icon7);
        pushButton_downleft->setIconSize(QSize(24, 24));
        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        horizontalLayout_3->addWidget(scrollArea_5);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy2);
        scrollArea_2->setMinimumSize(QSize(0, 124));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 742, 122));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        horizontalLayout->addLayout(horizontalLayout_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        verticalLayout->addWidget(scrollArea_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 754, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Untitled Animation", 0));
        pushButton_l->setText(QApplication::translate("MainWindow", "L", 0));
        pushButton_r->setText(QApplication::translate("MainWindow", "R", 0));
        label_2->setText(QApplication::translate("MainWindow", "unset", 0));
        label_3->setText(QApplication::translate("MainWindow", "unset", 0));
        label_6->setText(QApplication::translate("MainWindow", "Previous Frame", 0));
        pushButton_redo->setText(QApplication::translate("MainWindow", "Redo", 0));
        pushButton_undo->setText(QApplication::translate("MainWindow", "Undo", 0));
        pushButton_prev->setText(QString());
        pushButton_clearFrame->setText(QApplication::translate("MainWindow", "Clear Frame", 0));
        label_7->setText(QApplication::translate("MainWindow", "Change your colors", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_changeAudioFile->setToolTip(QApplication::translate("MainWindow", "Click to change audio file", 0));
#endif // QT_NO_TOOLTIP
        pushButton_changeAudioFile->setText(QApplication::translate("MainWindow", "Audio File: unset", 0));
        label_8->setText(QApplication::translate("MainWindow", "Frame length:", 0));
        label_9->setText(QApplication::translate("MainWindow", "ms", 0));
        label_5->setText(QApplication::translate("MainWindow", "Next Frame", 0));
        pushButton_new->setText(QApplication::translate("MainWindow", "New Frame After Current", 0));
        pushButton_delete->setText(QApplication::translate("MainWindow", "Delete Frame", 0));
        pushButton_preview->setText(QApplication::translate("MainWindow", "Preview Animation", 0));
        pushButton_next->setText(QString());
        pushButton_copyNew->setText(QApplication::translate("MainWindow", "Copy To New Frame", 0));
        pushButton_left->setText(QString());
        pushButton_down->setText(QString());
        pushButton_right->setText(QString());
        pushButton_up->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "Wrap edges", 0));
        pushButton_upright->setText(QString());
        pushButton_downright->setText(QString());
        pushButton_upleft->setText(QString());
        pushButton_downleft->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
