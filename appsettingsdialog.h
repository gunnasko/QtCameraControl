#ifndef APPSETTINGSDIALOG_H
#define APPSETTINGSDIALOG_H

#include <QFileDialog>
#include <QDialog>
#include <QSettings>
#include <QLabel>

#include "settingskeys.h"

class AppSettingsDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AppSettingsDialog(QWidget *parent = 0);

signals:
    void changed();

private slots:
    void openVideoFileDialog();
    void openImageFileDialog();
    void save();


private:
    QSettings settings_;
    QDir videoLocation_;
    QDir imageLocation_;

    QLabel *videoLocationValue_;
    QLabel *imageLocationValue_;
};

#endif // APPSETTINGSDIALOG_H
