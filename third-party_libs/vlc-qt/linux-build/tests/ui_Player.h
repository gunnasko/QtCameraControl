/********************************************************************************
** Form generated from reading UI file 'Player.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

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

class Ui_Player
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
    VlcWidgetVideo *video;
    QPushButton *openLocal;
    QPushButton *stop;
    QPushButton *openUrl;
    QPushButton *pause;
    VlcWidgetSeek *seek;
    QPushButton *equalizer;
    QPushButton *functionTest;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuMedia;

    void setupUi(QMainWindow *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName(QStringLiteral("Player"));
        Player->resize(640, 480);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/48x48/vlc-qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        Player->setWindowIcon(icon);
        actionClose = new QAction(Player);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionPause = new QAction(Player);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPause->setCheckable(true);
        actionStop = new QAction(Player);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionOpenLocal = new QAction(Player);
        actionOpenLocal->setObjectName(QStringLiteral("actionOpenLocal"));
        actionOpenUrl = new QAction(Player);
        actionOpenUrl->setObjectName(QStringLiteral("actionOpenUrl"));
        centralwidget = new QWidget(Player);
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

        gridLayout_2->addWidget(volume, 5, 0, 1, 2);

        video = new VlcWidgetVideo(centralwidget);
        video->setObjectName(QStringLiteral("video"));

        gridLayout_2->addWidget(video, 1, 0, 1, 2);

        openLocal = new QPushButton(centralwidget);
        openLocal->setObjectName(QStringLiteral("openLocal"));

        gridLayout_2->addWidget(openLocal, 0, 0, 1, 1);

        stop = new QPushButton(centralwidget);
        stop->setObjectName(QStringLiteral("stop"));

        gridLayout_2->addWidget(stop, 3, 1, 1, 1);

        openUrl = new QPushButton(centralwidget);
        openUrl->setObjectName(QStringLiteral("openUrl"));

        gridLayout_2->addWidget(openUrl, 0, 1, 1, 1);

        pause = new QPushButton(centralwidget);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setCheckable(true);

        gridLayout_2->addWidget(pause, 3, 0, 1, 1);

        seek = new VlcWidgetSeek(centralwidget);
        seek->setObjectName(QStringLiteral("seek"));
        sizePolicy.setHeightForWidth(seek->sizePolicy().hasHeightForWidth());
        seek->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(seek, 6, 0, 1, 2);

        equalizer = new QPushButton(centralwidget);
        equalizer->setObjectName(QStringLiteral("equalizer"));

        gridLayout_2->addWidget(equalizer, 4, 0, 1, 1);

        functionTest = new QPushButton(centralwidget);
        functionTest->setObjectName(QStringLiteral("functionTest"));

        gridLayout_2->addWidget(functionTest, 4, 1, 1, 1);

        Player->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Player);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuMedia = new QMenu(menubar);
        menuMedia->setObjectName(QStringLiteral("menuMedia"));
        Player->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMedia->menuAction());
        menuFile->addAction(actionOpenLocal);
        menuFile->addAction(actionOpenUrl);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuMedia->addAction(actionPause);
        menuMedia->addAction(actionStop);

        retranslateUi(Player);
        QObject::connect(actionClose, SIGNAL(triggered()), Player, SLOT(close()));

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QMainWindow *Player)
    {
        Player->setWindowTitle(QApplication::translate("Player", "Basic Player Test", 0));
        actionClose->setText(QApplication::translate("Player", "Close", 0));
        actionPause->setText(QApplication::translate("Player", "Pause", 0));
        actionStop->setText(QApplication::translate("Player", "Stop", 0));
        actionOpenLocal->setText(QApplication::translate("Player", "Open local file", 0));
        actionOpenUrl->setText(QApplication::translate("Player", "Open URL", 0));
        openLocal->setText(QApplication::translate("Player", "Open local file", 0));
        stop->setText(QApplication::translate("Player", "Stop", 0));
        openUrl->setText(QApplication::translate("Player", "Open URL", 0));
        pause->setText(QApplication::translate("Player", "Pause", 0));
        equalizer->setText(QApplication::translate("Player", "Equalizer", 0));
        functionTest->setText(QApplication::translate("Player", "Function test", 0));
        menuFile->setTitle(QApplication::translate("Player", "File", 0));
        menuMedia->setTitle(QApplication::translate("Player", "Media", 0));
    } // retranslateUi

};

namespace Ui {
    class Player: public Ui_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
