/********************************************************************************
** Form generated from reading UI file 'preview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEW_H
#define UI_PREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preview
{
public:
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_back10;
    QPushButton *pushButton_back1;
    QPushButton *pushButton_play;
    QPushButton *pushButton_forward1;
    QPushButton *pushButton_forward10;
    QPushButton *pushButton_close;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_duration;
    QLabel *label_start;

    void setupUi(QDialog *Preview)
    {
        if (Preview->objectName().isEmpty())
            Preview->setObjectName(QStringLiteral("Preview"));
        Preview->resize(280, 715);
        Preview->setMinimumSize(QSize(280, 715));
        Preview->setMaximumSize(QSize(280, 1000));
        frame = new QFrame(Preview);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 260, 620));
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
        gridLayoutWidget->setGeometry(QRect(10, 10, 241, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_back10 = new QPushButton(Preview);
        pushButton_back10->setObjectName(QStringLiteral("pushButton_back10"));
        pushButton_back10->setEnabled(false);
        pushButton_back10->setGeometry(QRect(10, 640, 51, 41));
        pushButton_back10->setFocusPolicy(Qt::NoFocus);
        pushButton_back1 = new QPushButton(Preview);
        pushButton_back1->setObjectName(QStringLiteral("pushButton_back1"));
        pushButton_back1->setEnabled(false);
        pushButton_back1->setGeometry(QRect(55, 640, 51, 41));
        pushButton_back1->setFocusPolicy(Qt::NoFocus);
        pushButton_play = new QPushButton(Preview);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setEnabled(true);
        pushButton_play->setGeometry(QRect(100, 640, 81, 41));
        pushButton_play->setFocusPolicy(Qt::NoFocus);
        pushButton_forward1 = new QPushButton(Preview);
        pushButton_forward1->setObjectName(QStringLiteral("pushButton_forward1"));
        pushButton_forward1->setEnabled(false);
        pushButton_forward1->setGeometry(QRect(175, 640, 51, 41));
        pushButton_forward1->setFocusPolicy(Qt::NoFocus);
        pushButton_forward10 = new QPushButton(Preview);
        pushButton_forward10->setObjectName(QStringLiteral("pushButton_forward10"));
        pushButton_forward10->setEnabled(false);
        pushButton_forward10->setGeometry(QRect(220, 640, 51, 41));
        pushButton_forward10->setFocusPolicy(Qt::NoFocus);
        pushButton_close = new QPushButton(Preview);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(80, 680, 121, 32));
        pushButton_close->setFocusPolicy(Qt::StrongFocus);
        label = new QLabel(Preview);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 678, 80, 12));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Preview);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(195, 678, 80, 12));
        label_2->setAlignment(Qt::AlignCenter);
        label_duration = new QLabel(Preview);
        label_duration->setObjectName(QStringLiteral("label_duration"));
        label_duration->setGeometry(QRect(195, 697, 80, 12));
        label_duration->setAlignment(Qt::AlignCenter);
        label_start = new QLabel(Preview);
        label_start->setObjectName(QStringLiteral("label_start"));
        label_start->setGeometry(QRect(5, 697, 80, 12));
        label_start->setAlignment(Qt::AlignCenter);

        retranslateUi(Preview);

        QMetaObject::connectSlotsByName(Preview);
    } // setupUi

    void retranslateUi(QDialog *Preview)
    {
        Preview->setWindowTitle(QApplication::translate("Preview", "Dialog", Q_NULLPTR));
        pushButton_back10->setText(QApplication::translate("Preview", "<10", Q_NULLPTR));
        pushButton_back1->setText(QApplication::translate("Preview", "<1", Q_NULLPTR));
        pushButton_play->setText(QApplication::translate("Preview", "Play", Q_NULLPTR));
        pushButton_forward1->setText(QApplication::translate("Preview", "1>", Q_NULLPTR));
        pushButton_forward10->setText(QApplication::translate("Preview", "10>", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("Preview", "Close", Q_NULLPTR));
        label->setText(QApplication::translate("Preview", "Start time", Q_NULLPTR));
        label_2->setText(QApplication::translate("Preview", "Duration", Q_NULLPTR));
        label_duration->setText(QApplication::translate("Preview", "25 ms", Q_NULLPTR));
        label_start->setText(QApplication::translate("Preview", "0 ms", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Preview: public Ui_Preview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEW_H
