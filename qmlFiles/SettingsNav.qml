import QtQuick

Rectangle {
    color: "azure"
    border.width: buttonBorderWidth
    radius: buttonRadius

    Text {
        anchors.centerIn: parent
        text: "Settings"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log("Settings Button Clicked")
        }
    }
}
