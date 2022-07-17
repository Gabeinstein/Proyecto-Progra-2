/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSlider *avance;
    QSlider *volume;
    QTextEdit *SongData;
    QPushButton *mute;
    QPushButton *play;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *canciones;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1273, 628);
        avance = new QSlider(Widget);
        avance->setObjectName(QString::fromUtf8("avance"));
        avance->setGeometry(QRect(430, 580, 481, 20));
        avance->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"\n"
""));
        avance->setOrientation(Qt::Horizontal);
        volume = new QSlider(Widget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(1140, 580, 111, 20));
        volume->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"\n"
""));
        volume->setOrientation(Qt::Horizontal);
        SongData = new QTextEdit(Widget);
        SongData->setObjectName(QString::fromUtf8("SongData"));
        SongData->setGeometry(QRect(30, 550, 371, 51));
        mute = new QPushButton(Widget);
        mute->setObjectName(QString::fromUtf8("mute"));
        mute->setGeometry(QRect(1062, 570, 41, 29));
        play = new QPushButton(Widget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setEnabled(true);
        play->setGeometry(QRect(620, 530, 83, 29));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 530, 83, 29));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 530, 83, 29));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(270, 180, 781, 321));
        canciones = new QVBoxLayout(verticalLayoutWidget);
        canciones->setObjectName(QString::fromUtf8("canciones"));
        canciones->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 591, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic")});
        font.setPointSize(48);
        label->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "SpotifyUSFQ", nullptr));
        mute->setText(QString());
        play->setText(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "Next", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Previeus", nullptr));
        label->setText(QCoreApplication::translate("Widget", "SPOTIFY USFQ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
