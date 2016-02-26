/********************************************************************************
** Form generated from reading UI file 'MetaManager.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METAMANAGER_H
#define UI_METAMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_MetaManager
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonOpen;
    QPushButton *buttonRead;
    QLineEdit *edit;
    QPushButton *buttonSet;
    QPushButton *buttonSave;
    QLabel *labelMeta;
    QLabel *labelNote;
    QLabel *labelSave;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *MetaManager)
    {
        if (MetaManager->objectName().isEmpty())
            MetaManager->setObjectName(QStringLiteral("MetaManager"));
        MetaManager->resize(500, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/48x48/vlc-qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        MetaManager->setWindowIcon(icon);
        gridLayout = new QGridLayout(MetaManager);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonOpen = new QPushButton(MetaManager);
        buttonOpen->setObjectName(QStringLiteral("buttonOpen"));

        gridLayout->addWidget(buttonOpen, 0, 1, 1, 1);

        buttonRead = new QPushButton(MetaManager);
        buttonRead->setObjectName(QStringLiteral("buttonRead"));
        buttonRead->setMinimumSize(QSize(75, 0));

        gridLayout->addWidget(buttonRead, 1, 0, 1, 1);

        edit = new QLineEdit(MetaManager);
        edit->setObjectName(QStringLiteral("edit"));

        gridLayout->addWidget(edit, 1, 1, 1, 1);

        buttonSet = new QPushButton(MetaManager);
        buttonSet->setObjectName(QStringLiteral("buttonSet"));
        buttonSet->setMinimumSize(QSize(75, 0));

        gridLayout->addWidget(buttonSet, 1, 2, 1, 1);

        buttonSave = new QPushButton(MetaManager);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        gridLayout->addWidget(buttonSave, 3, 1, 1, 1);

        labelMeta = new QLabel(MetaManager);
        labelMeta->setObjectName(QStringLiteral("labelMeta"));
        labelMeta->setWordWrap(true);

        gridLayout->addWidget(labelMeta, 4, 0, 1, 3);

        labelNote = new QLabel(MetaManager);
        labelNote->setObjectName(QStringLiteral("labelNote"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelNote->sizePolicy().hasHeightForWidth());
        labelNote->setSizePolicy(sizePolicy);
        labelNote->setWordWrap(true);

        gridLayout->addWidget(labelNote, 2, 0, 1, 3);

        labelSave = new QLabel(MetaManager);
        labelSave->setObjectName(QStringLiteral("labelSave"));
        sizePolicy.setHeightForWidth(labelSave->sizePolicy().hasHeightForWidth());
        labelSave->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelSave, 5, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 3);


        retranslateUi(MetaManager);

        QMetaObject::connectSlotsByName(MetaManager);
    } // setupUi

    void retranslateUi(QDialog *MetaManager)
    {
        MetaManager->setWindowTitle(QApplication::translate("MetaManager", "Meta Manager Test", 0));
        buttonOpen->setText(QApplication::translate("MetaManager", "Open Media File", 0));
        buttonRead->setText(QApplication::translate("MetaManager", "Read", 0));
        buttonSet->setText(QApplication::translate("MetaManager", "Set", 0));
        buttonSave->setText(QApplication::translate("MetaManager", "Save Meta", 0));
        labelMeta->setText(QString());
        labelNote->setText(QApplication::translate("MetaManager", "Note: This example will set the same option for all meta information. Please use it only for testing!", 0));
        labelSave->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MetaManager: public Ui_MetaManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METAMANAGER_H
