#ifndef CAMERAMODEL_H
#define CAMERAMODEL_H

#include <QAbstractListModel>

#include "data/abstractcamera.h"
#include "camerarepository.h"

class CameraModelElement : public QObject
{
    Q_OBJECT
public:
    CameraModelElement(QSharedPointer<AbstractCamera> camera, QModelIndex index) : camera_(camera), index_(index)
    {
        connect(camera_.data(), &AbstractCamera::userDefinedNameChanged, this, &CameraModelElement::changed);
        connect(camera_.data(), &AbstractCamera::dataChanged, this, &CameraModelElement::changed);
    }
    QSharedPointer<AbstractCamera> camera_;
    QModelIndex index_;
signals:
    void changed();
};

class CamerasModel: public QAbstractListModel
{
    Q_OBJECT
public:
    enum CameraModelEnum {
        DeviceNameRole = Qt::UserRole + 1,
        UserDefinedNameRole,
        EnabledRole
    };

    CamerasModel(QSharedPointer<DataBase> db, QObject *parent = 0);
    ~CamerasModel();
    QSharedPointer<AbstractCamera> getCamera(QString deviceName);
    QSharedPointer<AbstractCamera> getCamera(int index);
    QList <QSharedPointer<AbstractCamera>> getCameras() const;
    QStringList getCameraNames();
    bool containsCamera(const QSharedPointer<AbstractCamera> camera);
    bool containsCamera(const QString deviceName);
    void deleteCamera(int index);

    int rowCount(const QModelIndex & parent = QModelIndex()) const;
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
    bool setData (const QModelIndex & index, const QVariant & value, int role = Qt::EditRole);

    QHash<int, QByteArray> roleNames() const;
    Q_INVOKABLE QString getCameraId(int index);
public slots:
    void searchAndAddLocalCameras();
    void addNetworkCamera(QUrl address);

private slots:
    void refreshModel();

private:
    void appendElement(QSharedPointer<CameraModelElement> camera);
    void removeElement(QSharedPointer<CameraModelElement> camera);

    QList<QSharedPointer<CameraModelElement>> cameras_;

    void addCamera(const QSharedPointer<AbstractCamera> camera);
    void clearNotAvailable();
    QList <QMetaObject::Connection > dbConnections_;
    QSharedPointer<CameraRepository> camDb_;

};

#endif // CAMERAMODEL_H
