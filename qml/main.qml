import QtQuick 2.5
import QtQuick.Controls 1.4

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Camera Control")
    id: main

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: console.log("Open action triggered");
            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }

    CamSelect {
        id: camselect
        anchors.right: parent.right
        height: parent.height
        width: parent.width/4
    }
    CamView {
        id: camview
        anchors.left: parent.left
        height: parent.height
        width: parent.width - camselect.width

        currentIndex: camselect.currentIndex
    }
}
