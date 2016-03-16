import QtQuick 2.5

Rectangle {
    property int currentIndex: cameraList.currentIndex
    Component{
        id: cameraDelegate
        Item{
            property int cellHeight: 25

            width: parent.width
            height: cellHeight
            Text {
                text: camName
                anchors.left: parent.left
                anchors.leftMargin: 5
                anchors.verticalCenter: parent.verticalCenter
            }
            Image {
                height: cellHeight
                width: cellHeight
                fillMode: Image.PreserveAspectCrop
                smooth: true
                source: camEnabled ? "qrc:/toolbar/images/power_on_540px.png": "qrc:/toolbar/images/power_off_540px.png"
                anchors.right: parent.right
                anchors.rightMargin: 5
                anchors.verticalCenter: parent.verticalCenter
            }
            Rectangle
            {
                height: 1
                width: parent.width
                color: "grey"
                anchors.bottom: parent.bottom
            }
            MouseArea
            {
                anchors.fill: parent
                onClicked: {
                    cameraList.currentIndex = index;
                }
            }
        }
    }

    ListView {
        id: cameraList
        anchors.fill: parent
        model: cameras
        delegate: cameraDelegate
        highlight: Rectangle {
            width: parent.width
            color: "lightgray"
        }
    }
}
