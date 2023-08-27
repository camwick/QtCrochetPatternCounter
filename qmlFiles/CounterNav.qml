import QtQuick

Rectangle {
    color: "azure"
    border.width: buttonBorderWidth
    radius: buttonRadius

    Text {
        anchors.centerIn: parent
        text: "Counter"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log("Counter Button Clicked")
        }
    }
}
