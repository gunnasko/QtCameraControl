import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Camera Control")
    id: main

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
                        mainStack.push(camSettings)
                }
            }
            Image {
                anchors.right: rightMost.left
                source: icon.url("qrc:/toolbar/images/seperator.png")

            }
            ToolButton {
                id: rightMost
                iconSource: "qrc:/toolbar/images/refresh_original.png"
                onClicked: {
                    cameras.searchAndAddLocalCameras()
                }
                Layout.alignment: Qt.AlignRight
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
            z: 1
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
            id: camSettings
        }
        initialItem: mainCamView
    }
}
