#ifndef CAMERAMODEL_H
#define CAMERAMODEL_H

#include <QAbstractListModel>

#include "cameras.h"

class CameraModelElement : public QObject
{
    Q_OBJECT
public:
    CameraModelElement(QSharedPointer<AbstractCamera> camera, QModelIndex index) : camera_(camera), index_(index)
    {
        connect(camera_.data(), &AbstractCamera::userDefinedNameChanged, this, &CameraModelElement::changed);
    }
    QSharedPointer<AbstractCamera> camera_;
    QModelIndex index_;
signals:
    void changed();
};

class CameraModel: public QAbstractListModel
{
    Q_OBJECT
public:
    CameraModel(QSharedPointer<Cameras> cameras);
    int rowCount(const QModelIndex & parent = QModelIndex()) const;
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
    bool setData (const QModelIndex & index, const QVariant & value, int role = Qt::EditRole);
    QHash<int, QByteArray> roleNames() const;

private slots:
    void refreshModel();
    void updateModel();

private:
    enum CameraModelEnum {
        DeviceNameRole = Qt::UserRole + 1,
        UserDefinedNameRole
    };
    void addCameras(QSharedPointer<Cameras> cameras);
    void clearModel();
    void appendCamera(QSharedPointer<CameraModelElement> camera);
    QList<QSharedPointer<CameraModelElement>> elements_;
    QSharedPointer<Cameras> cameras_;
};

#endif // CAMERAMODEL_H
