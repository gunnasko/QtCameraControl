/********************************************************************************
** Form generated from reading UI file 'MediaList.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIALIST_H
#define UI_MEDIALIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "../../src/widgets/WidgetSeek.h"
#include "../../src/widgets/WidgetVideo.h"
#include "../../src/widgets/WidgetVolumeSlider.h"

QT_BEGIN_NAMESPACE

class Ui_MediaList
{
public:
    QAction *actionClose;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionOpenLocal;
    QAction *actionOpenUrl;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    VlcWidgetVolumeSlider *volume;
    VlcWidgetSeek *seek;
    QPushButton *pause;
    VlcWidgetVideo *video;
    QPushButton *stop;
    QPushButton *previous;
    QPushButton *next;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuMedia;

    void setupUi(QMainWindow *MediaList)
    {
        if (MediaList->objectName().isEmpty())
            MediaList->setObjectName(QStringLiteral("MediaList"));
        MediaList->resize(640, 480);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/48x48/vlc-qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        MediaList->setWindowIcon(icon);
        actionClose = new QAction(MediaList);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionPause = new QAction(MediaList);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionStop = new QAction(MediaList);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionOpenLocal = new QAction(MediaList);
        actionOpenLocal->setObjectName(QStringLiteral("actionOpenLocal"));
        actionOpenUrl = new QAction(MediaList);
        actionOpenUrl->setObjectName(QStringLiteral("actionOpenUrl"));
        centralwidget = new QWidget(MediaList);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        volume = new VlcWidgetVolumeSlider(centralwidget);
        volume->setObjectName(QStringLiteral("volume"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(volume, 4, 0, 1, 2);

        seek = new VlcWidgetSeek(centralwidget);
        seek->setObjectName(QStringLiteral("seek"));
        sizePolicy.setHeightForWidth(seek->sizePolicy().hasHeightForWidth());
        seek->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(seek, 5, 0, 1, 2);

        pause = new QPushButton(centralwidget);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setCheckable(true);

        gridLayout_2->addWidget(pause, 2, 0, 1, 1);

        video = new VlcWidgetVideo(centralwidget);
        video->setObjectName(QStringLiteral("video"));

        gridLayout_2->addWidget(video, 0, 0, 1, 2);

        stop = new QPushButton(centralwidget);
        stop->setObjectName(QStringLiteral("stop"));

        gridLayout_2->addWidget(stop, 2, 1, 1, 1);

        previous = new QPushButton(centralwidget);
        previous->setObjectName(QStringLiteral("previous"));

        gridLayout_2->addWidget(previous, 3, 0, 1, 1);

        next = new QPushButton(centralwidget);
        next->setObjectName(QStringLiteral("next"));

        gridLayout_2->addWidget(next, 3, 1, 1, 1);

        MediaList->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MediaList);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuMedia = new QMenu(menubar);
        menuMedia->setObjectName(QStringLiteral("menuMedia"));
        MediaList->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMedia->menuAction());
        menuFile->addAction(actionOpenLocal);
        menuFile->addAction(actionOpenUrl);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuMedia->addAction(actionPause);
        menuMedia->addAction(actionStop);

        retranslateUi(MediaList);
        QObject::connect(actionClose, SIGNAL(triggered()), MediaList, SLOT(close()));

        QMetaObject::connectSlotsByName(MediaList);
    } // setupUi

    void retranslateUi(QMainWindow *MediaList)
    {
        MediaList->setWindowTitle(QApplication::translate("MediaList", "Basic Player Test", 0));
        actionClose->setText(QApplication::translate("MediaList", "Close", 0));
        actionPause->setText(QApplication::translate("MediaList", "Pause", 0));
        actionStop->setText(QApplication::translate("MediaList", "Stop", 0));
        actionOpenLocal->setText(QApplication::translate("MediaList", "Open local file", 0));
        actionOpenUrl->setText(QApplication::translate("MediaList", "Open URL", 0));
        pause->setText(QApplication::translate("MediaList", "Pause", 0));
        stop->setText(QApplication::translate("MediaList", "Stop", 0));
        previous->setText(QApplication::translate("MediaList", "Previous", 0));
        next->setText(QApplication::translate("MediaList", "Next", 0));
        menuFile->setTitle(QApplication::translate("MediaList", "File", 0));
        menuMedia->setTitle(QApplication::translate("MediaList", "Media", 0));
    } // retranslateUi

};

namespace Ui {
    class MediaList: public Ui_MediaList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIALIST_H
