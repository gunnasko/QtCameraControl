import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2
import Qt.labs.settings 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Camera Control")
    id: main

    Settings {
        property alias qmlMainX: main.x
        property alias qmlMainY: main.y
        property alias qmlMainWidth: main.width
        property alias qmlMainHeight: main.height
    }

    toolBar: ToolBar {
        RowLayout {
            anchors.fill: parent
            ToolButton {
                iconSource: "qrc:/toolbar/images/camera.png"
                onClicked: {
                    mainStack.pop(mainCamView)
                }
            }
            ToolButton {
                iconSource: "qrc:/toolbar/images/settings.png"
                onClicked: {
                    if(mainStack.currentItem === mainCamView) {
                        mainStack.push(camSettings)
                    } else {
                        mainStack.pop(camSettings)
                    }
                }
            }
        }
    }

    StackView {
        id: mainStack
        anchors.fill: parent

        Rectangle {
            id: mainCamView
            height: parent.height
            width: parent.width
            z: 2
            CamView {
                height: parent.height
                width: parent.width - camselect.width
                id: camview
                currentIndex: camselect.currentIndex
                anchors.left: parent.left
            }
            CamSelect {
                id: camselect
                anchors.right: parent.right
                height: parent.height
                width: parent.width/4
            }

        }
        CamSettings {
            z:1
            id: camSettings
        }
        initialItem: mainCamView
    }
}
