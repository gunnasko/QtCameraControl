/********************************************************************************
** Form generated from reading UI file 'Recorder.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDER_H
#define UI_RECORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Recorder
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupMedia;
    QGridLayout *gridLayout_2;
    QLineEdit *editUrl;
    QLineEdit *editPath;
    QLabel *labelUrl;
    QLabel *labelPath;
    QToolButton *buttonBrowse;
    QLineEdit *editName;
    QLabel *labelName;
    QGroupBox *groupSettings;
    QGridLayout *gridLayout_3;
    QComboBox *comboMux;
    QComboBox *comboVideo;
    QComboBox *comboAudio;
    QLabel *labelMux;
    QLabel *labelVideo;
    QLabel *labelAudio;
    QPushButton *buttonPlay;
    QLabel *label;
    QPushButton *buttonStop;

    void setupUi(QDialog *Recorder)
    {
        if (Recorder->objectName().isEmpty())
            Recorder->setObjectName(QStringLiteral("Recorder"));
        Recorder->resize(500, 353);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/48x48/vlc-qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        Recorder->setWindowIcon(icon);
        gridLayout = new QGridLayout(Recorder);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupMedia = new QGroupBox(Recorder);
        groupMedia->setObjectName(QStringLiteral("groupMedia"));
        gridLayout_2 = new QGridLayout(groupMedia);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        editUrl = new QLineEdit(groupMedia);
        editUrl->setObjectName(QStringLiteral("editUrl"));

        gridLayout_2->addWidget(editUrl, 0, 1, 1, 2);

        editPath = new QLineEdit(groupMedia);
        editPath->setObjectName(QStringLiteral("editPath"));

        gridLayout_2->addWidget(editPath, 2, 1, 1, 1);

        labelUrl = new QLabel(groupMedia);
        labelUrl->setObjectName(QStringLiteral("labelUrl"));

        gridLayout_2->addWidget(labelUrl, 0, 0, 1, 1);

        labelPath = new QLabel(groupMedia);
        labelPath->setObjectName(QStringLiteral("labelPath"));

        gridLayout_2->addWidget(labelPath, 2, 0, 1, 1);

        buttonBrowse = new QToolButton(groupMedia);
        buttonBrowse->setObjectName(QStringLiteral("buttonBrowse"));

        gridLayout_2->addWidget(buttonBrowse, 2, 2, 1, 1);

        editName = new QLineEdit(groupMedia);
        editName->setObjectName(QStringLiteral("editName"));

        gridLayout_2->addWidget(editName, 1, 1, 1, 2);

        labelName = new QLabel(groupMedia);
        labelName->setObjectName(QStringLiteral("labelName"));

        gridLayout_2->addWidget(labelName, 1, 0, 1, 1);


        gridLayout->addWidget(groupMedia, 0, 0, 1, 2);

        groupSettings = new QGroupBox(Recorder);
        groupSettings->setObjectName(QStringLiteral("groupSettings"));
        gridLayout_3 = new QGridLayout(groupSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        comboMux = new QComboBox(groupSettings);
        comboMux->setObjectName(QStringLiteral("comboMux"));

        gridLayout_3->addWidget(comboMux, 1, 1, 1, 1);

        comboVideo = new QComboBox(groupSettings);
        comboVideo->setObjectName(QStringLiteral("comboVideo"));

        gridLayout_3->addWidget(comboVideo, 2, 1, 1, 1);

        comboAudio = new QComboBox(groupSettings);
        comboAudio->setObjectName(QStringLiteral("comboAudio"));

        gridLayout_3->addWidget(comboAudio, 3, 1, 1, 1);

        labelMux = new QLabel(groupSettings);
        labelMux->setObjectName(QStringLiteral("labelMux"));

        gridLayout_3->addWidget(labelMux, 1, 0, 1, 1);

        labelVideo = new QLabel(groupSettings);
        labelVideo->setObjectName(QStringLiteral("labelVideo"));

        gridLayout_3->addWidget(labelVideo, 2, 0, 1, 1);

        labelAudio = new QLabel(groupSettings);
        labelAudio->setObjectName(QStringLiteral("labelAudio"));

        gridLayout_3->addWidget(labelAudio, 3, 0, 1, 1);


        gridLayout->addWidget(groupSettings, 1, 0, 1, 2);

        buttonPlay = new QPushButton(Recorder);
        buttonPlay->setObjectName(QStringLiteral("buttonPlay"));

        gridLayout->addWidget(buttonPlay, 2, 0, 1, 1);

        label = new QLabel(Recorder);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 4, 0, 1, 2);

        buttonStop = new QPushButton(Recorder);
        buttonStop->setObjectName(QStringLiteral("buttonStop"));

        gridLayout->addWidget(buttonStop, 2, 1, 1, 1);


        retranslateUi(Recorder);

        QMetaObject::connectSlotsByName(Recorder);
    } // setupUi

    void retranslateUi(QDialog *Recorder)
    {
        Recorder->setWindowTitle(QApplication::translate("Recorder", "Recorder Test", 0));
        groupMedia->setTitle(QApplication::translate("Recorder", "Media", 0));
        editUrl->setText(QApplication::translate("Recorder", "http://192.168.1.50:1234/udp/232.4.1.1:5002", 0));
        labelUrl->setText(QApplication::translate("Recorder", "Media URL:", 0));
        labelPath->setText(QApplication::translate("Recorder", "Output path:", 0));
        buttonBrowse->setText(QApplication::translate("Recorder", "...", 0));
        editName->setText(QApplication::translate("Recorder", "Test", 0));
        labelName->setText(QApplication::translate("Recorder", "Output name:", 0));
        groupSettings->setTitle(QApplication::translate("Recorder", "Settings", 0));
        labelMux->setText(QApplication::translate("Recorder", "Mux:", 0));
        labelVideo->setText(QApplication::translate("Recorder", "Video codec", 0));
        labelAudio->setText(QApplication::translate("Recorder", "Audio codec", 0));
        buttonPlay->setText(QApplication::translate("Recorder", "Start", 0));
        label->setText(QApplication::translate("Recorder", "Please, see console output for test results!\n"
"Test duration is 10s.", 0));
        buttonStop->setText(QApplication::translate("Recorder", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class Recorder: public Ui_Recorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDER_H
