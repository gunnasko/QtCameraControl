import QtQuick 2.0
import QtMultimedia 5.5

Rectangle {
    property int currentIndex
    color: "black"
    Camera {
        id: camera
        deviceId: cameras.getCameraId(currentIndex)
    }

    VideoOutput {
        source: camera
        anchors.fill: parent
        focus : visible // to receive focus and capture key events when visible
    }
}
