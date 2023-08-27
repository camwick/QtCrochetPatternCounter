import QtQuick

Rectangle {
    color: "azure"
    border.width: buttonBorderWidth
    radius: buttonRadius

    Text {
        anchors.centerIn: parent
        text: "About"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log("About Button Clicked")
        }
    }
}
