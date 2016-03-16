import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1

Item {
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
    ListView {
        model: cameras
        delegate: settingsDelegate
        anchors.fill: parent
    }
}
