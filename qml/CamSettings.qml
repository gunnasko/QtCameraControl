import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1
import Qt.labs.settings 1.0

Rectangle {
    color: "white"
    Component {
        id: settingsDelegate
        GroupBox {
            GroupBox {
                title: "Camera Settings for " + camName
                ColumnLayout {
                    GroupBox {
                        title: "Camera Id"
                        Layout.fillWidth: true
                        Text { text: camId; Layout.fillWidth: true }
                    }
                    GroupBox {
                        title: "Change Name"
                        Layout.fillWidth: true
                        TextField {
                            text: camName
                            Layout.fillWidth: true
                            onTextChanged: {
                                camName = text
                            }
                        }
                    }
                }
            }
        }
    }

    ColumnLayout {
        anchors.fill: parent

        StackView {
            id: settingsStack
            Layout.fillHeight: true
            Layout.fillWidth: true
            initialItem: camSettings

            ListView {
                z: 1
                id: camSettings
                model: cameras
                delegate: settingsDelegate
            }

            AppSettings {
                z:0
                id: appSettings
            }

        }
        RowLayout {
            height: 40
            width: parent.width
            Button {
                Layout.fillWidth: true
                Layout.preferredHeight: 40
                text: "Camera Settings"
                onClicked: {
                    settingsStack.pop(camSettings)
                }
            }
            Button {
                Layout.fillWidth: true
                Layout.preferredHeight: 40
                text: "Recording Settings"
                onClicked: {
                    settingsStack.push(appSettings)
                }

            }

        }
    }
}
