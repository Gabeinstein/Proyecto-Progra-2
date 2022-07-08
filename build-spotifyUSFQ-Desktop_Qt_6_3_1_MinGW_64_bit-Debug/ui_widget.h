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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *abrir;
    QPushButton *play;
    QPushButton *stop;
    QPushButton *mute;
    QPushButton *pause;
    QSlider *volume;
    QProgressBar *avance;
    QPushButton *connect;
    QPushButton *request;
    QTextEdit *Texto;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(651, 545);
        abrir = new QPushButton(Widget);
        abrir->setObjectName(QString::fromUtf8("abrir"));
        abrir->setGeometry(QRect(30, 30, 83, 29));
        play = new QPushButton(Widget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(310, 30, 83, 29));
        stop = new QPushButton(Widget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(530, 30, 83, 29));
        mute = new QPushButton(Widget);
        mute->setObjectName(QString::fromUtf8("mute"));
        mute->setGeometry(QRect(30, 150, 83, 29));
        pause = new QPushButton(Widget);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(420, 30, 83, 29));
        volume = new QSlider(Widget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(150, 150, 160, 18));
        volume->setOrientation(Qt::Horizontal);
        avance = new QProgressBar(Widget);
        avance->setObjectName(QString::fromUtf8("avance"));
        avance->setGeometry(QRect(30, 90, 581, 23));
        avance->setValue(0);
        connect = new QPushButton(Widget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(30, 210, 83, 29));
        request = new QPushButton(Widget);
        request->setObjectName(QString::fromUtf8("request"));
        request->setGeometry(QRect(160, 210, 83, 29));
        Texto = new QTextEdit(Widget);
        Texto->setObjectName(QString::fromUtf8("Texto"));
        Texto->setGeometry(QRect(40, 270, 211, 221));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "SpotifyUSFQ", nullptr));
        abrir->setText(QCoreApplication::translate("Widget", "Abrir", nullptr));
        play->setText(QCoreApplication::translate("Widget", "Play", nullptr));
        stop->setText(QCoreApplication::translate("Widget", "Stop", nullptr));
        mute->setText(QCoreApplication::translate("Widget", "Mute", nullptr));
        pause->setText(QCoreApplication::translate("Widget", "Pause", nullptr));
        connect->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        request->setText(QCoreApplication::translate("Widget", "Request", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
