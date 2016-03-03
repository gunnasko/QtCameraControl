/********************************************************************************
** Form generated from reading UI file 'Tests.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTS_H
#define UI_TESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tests
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *buttonDualInstance;
    QSpacerItem *verticalSpacer;
    QPushButton *buttonPlayer;
    QPushButton *buttonDualPlayer;
    QPushButton *buttonMetaManager;
    QPushButton *buttonQml;
    QPushButton *buttonRecorder;
    QLabel *label;
    QPushButton *buttonList;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *Tests)
    {
        if (Tests->objectName().isEmpty())
            Tests->setObjectName(QStringLiteral("Tests"));
        Tests->resize(400, 280);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/48x48/vlc-qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        Tests->setWindowIcon(icon);
        actionExit = new QAction(Tests);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralwidget = new QWidget(Tests);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonDualInstance = new QPushButton(centralwidget);
        buttonDualInstance->setObjectName(QStringLiteral("buttonDualInstance"));

        gridLayout->addWidget(buttonDualInstance, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 2);

        buttonPlayer = new QPushButton(centralwidget);
        buttonPlayer->setObjectName(QStringLiteral("buttonPlayer"));

        gridLayout->addWidget(buttonPlayer, 1, 0, 1, 2);

        buttonDualPlayer = new QPushButton(centralwidget);
        buttonDualPlayer->setObjectName(QStringLiteral("buttonDualPlayer"));

        gridLayout->addWidget(buttonDualPlayer, 3, 1, 1, 1);

        buttonMetaManager = new QPushButton(centralwidget);
        buttonMetaManager->setObjectName(QStringLiteral("buttonMetaManager"));

        gridLayout->addWidget(buttonMetaManager, 5, 0, 1, 2);

        buttonQml = new QPushButton(centralwidget);
        buttonQml->setObjectName(QStringLiteral("buttonQml"));

        gridLayout->addWidget(buttonQml, 2, 0, 1, 2);

        buttonRecorder = new QPushButton(centralwidget);
        buttonRecorder->setObjectName(QStringLiteral("buttonRecorder"));

        gridLayout->addWidget(buttonRecorder, 6, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        buttonList = new QPushButton(centralwidget);
        buttonList->setObjectName(QStringLiteral("buttonList"));

        gridLayout->addWidget(buttonList, 4, 0, 1, 2);

        Tests->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tests);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Tests->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(Tests);
        QObject::connect(actionExit, SIGNAL(triggered()), Tests, SLOT(close()));

        QMetaObject::connectSlotsByName(Tests);
    } // setupUi

    void retranslateUi(QMainWindow *Tests)
    {
        Tests->setWindowTitle(QApplication::translate("Tests", "VLC-Qt Test", 0));
        actionExit->setText(QApplication::translate("Tests", "Exit", 0));
        buttonDualInstance->setText(QApplication::translate("Tests", "Dual Instance Test", 0));
        buttonPlayer->setText(QApplication::translate("Tests", "Basic Player Test", 0));
        buttonDualPlayer->setText(QApplication::translate("Tests", "Dual Player Test", 0));
        buttonMetaManager->setText(QApplication::translate("Tests", "Meta Manager Test", 0));
        buttonQml->setText(QApplication::translate("Tests", "Basic QML Test", 0));
        buttonRecorder->setText(QApplication::translate("Tests", "Recorder Test", 0));
        label->setText(QApplication::translate("Tests", "Select your test below:", 0));
        buttonList->setText(QApplication::translate("Tests", "Media List Test", 0));
        menuFile->setTitle(QApplication::translate("Tests", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class Tests: public Ui_Tests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTS_H
