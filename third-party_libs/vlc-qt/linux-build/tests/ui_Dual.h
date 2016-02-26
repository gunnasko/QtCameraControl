/********************************************************************************
** Form generated from reading UI file 'Dual.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUAL_H
#define UI_DUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../src/widgets/WidgetVideo.h"

QT_BEGIN_NAMESPACE

class Ui_Dual
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *group1;
    QVBoxLayout *verticalLayout;
    QPushButton *open1;
    VlcWidgetVideo *video1;
    QPushButton *stop1;
    QGroupBox *group2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *open2;
    VlcWidgetVideo *video2;
    QPushButton *stop2;

    void setupUi(QMainWindow *Dual)
    {
        if (Dual->objectName().isEmpty())
            Dual->setObjectName(QStringLiteral("Dual"));
        Dual->resize(640, 480);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/48x48/vlc-qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dual->setWindowIcon(icon);
        actionClose = new QAction(Dual);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        centralwidget = new QWidget(Dual);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        group1 = new QGroupBox(centralwidget);
        group1->setObjectName(QStringLiteral("group1"));
        verticalLayout = new QVBoxLayout(group1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        open1 = new QPushButton(group1);
        open1->setObjectName(QStringLiteral("open1"));

        verticalLayout->addWidget(open1);

        video1 = new VlcWidgetVideo(group1);
        video1->setObjectName(QStringLiteral("video1"));

        verticalLayout->addWidget(video1);

        stop1 = new QPushButton(group1);
        stop1->setObjectName(QStringLiteral("stop1"));

        verticalLayout->addWidget(stop1);


        horizontalLayout->addWidget(group1);

        group2 = new QGroupBox(centralwidget);
        group2->setObjectName(QStringLiteral("group2"));
        verticalLayout_2 = new QVBoxLayout(group2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        open2 = new QPushButton(group2);
        open2->setObjectName(QStringLiteral("open2"));

        verticalLayout_2->addWidget(open2);

        video2 = new VlcWidgetVideo(group2);
        video2->setObjectName(QStringLiteral("video2"));

        verticalLayout_2->addWidget(video2);

        stop2 = new QPushButton(group2);
        stop2->setObjectName(QStringLiteral("stop2"));

        verticalLayout_2->addWidget(stop2);


        horizontalLayout->addWidget(group2);

        Dual->setCentralWidget(centralwidget);

        retranslateUi(Dual);
        QObject::connect(actionClose, SIGNAL(triggered()), Dual, SLOT(close()));

        QMetaObject::connectSlotsByName(Dual);
    } // setupUi

    void retranslateUi(QMainWindow *Dual)
    {
        actionClose->setText(QApplication::translate("Dual", "Close", 0));
        group1->setTitle(QApplication::translate("Dual", "Instance 1", 0));
        open1->setText(QApplication::translate("Dual", "Open 1", 0));
        stop1->setText(QApplication::translate("Dual", "Stop 1", 0));
        group2->setTitle(QApplication::translate("Dual", "Instance 2", 0));
        open2->setText(QApplication::translate("Dual", "Open 2", 0));
        stop2->setText(QApplication::translate("Dual", "Stop 2", 0));
        Q_UNUSED(Dual);
    } // retranslateUi

};

namespace Ui {
    class Dual: public Ui_Dual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUAL_H
