import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.2
import Qt.labs.settings 1.0

Rectangle {
    FileDialog{
        id: imageDialog
        title: "Choose a folder to save images"
        folder: shortcuts.pictures
        selectFolder: true
        onAccepted: {
            settings.qmlPicLocation = imageDialog.folder
            imageText.text = settings.qmlPicLocation
        }
    }
    FileDialog{
        id: videoDialog
        title: "Choose a folder to save videos"
        folder: shortcuts.movies
        selectFolder: true
        onAccepted: {
            settings.qmlVidLocation = videoDialog.folder
            vidText.text = settings.qmlVidLocation
        }

    }

    Settings {
        id: settings
        property string qmlPicLocation: imageDialog.shortcuts.pictures
        property string qmlVidLocation: videoDialog.shortcuts.movies
    }

    ColumnLayout {
        GroupBox {
            title: "Saved Image Location"
            Layout.fillWidth: true
            Row {
                spacing: 2
                Button {
                    text: "Browse..."
                    Layout.fillWidth: true
                    onClicked: {
                        imageDialog.open()
                    }
                }
                Text { id: imageText; text: settings.qmlPicLocation; Layout.fillWidth: true }
            }
        }
        GroupBox {
            title: "Saved Video Location"
            Layout.fillWidth: true
            Row {
                spacing: 2

                Button {
                    text: "Browse..."
                    Layout.fillWidth: true
                    onClicked: {
                        videoDialog.open()
                    }
                }
                Text {id: vidText; text: settings.qmlVidLocation; Layout.fillWidth: true }
            }
        }
    }

}
