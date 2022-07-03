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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *abrir;
    QPushButton *play;
    QPushButton *pause;
    QPushButton *stop;
    QPushButton *mute;
    QSlider *volume;
    QProgressBar *progressBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        abrir = new QPushButton(Widget);
        abrir->setObjectName(QString::fromUtf8("abrir"));
        abrir->setGeometry(QRect(60, 40, 83, 29));
        play = new QPushButton(Widget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(190, 40, 83, 29));
        pause = new QPushButton(Widget);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(320, 40, 83, 29));
        stop = new QPushButton(Widget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(450, 40, 83, 29));
        mute = new QPushButton(Widget);
        mute->setObjectName(QString::fromUtf8("mute"));
        mute->setGeometry(QRect(60, 170, 83, 29));
        volume = new QSlider(Widget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(230, 170, 160, 18));
        volume->setOrientation(Qt::Horizontal);
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(60, 110, 471, 23));
        progressBar->setValue(0);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        abrir->setText(QCoreApplication::translate("Widget", "Abrir", nullptr));
        play->setText(QCoreApplication::translate("Widget", "Play", nullptr));
        pause->setText(QCoreApplication::translate("Widget", "Pause", nullptr));
        stop->setText(QCoreApplication::translate("Widget", "Stop", nullptr));
        mute->setText(QCoreApplication::translate("Widget", "Mute", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
