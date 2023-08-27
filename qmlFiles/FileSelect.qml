import QtQuick
import QtQuick.Dialogs

Rectangle{
    id: fileSelectButton
    color: 'yellow'

    Text {
        text: "Open File"
        anchors.centerIn: parent
    }

    MouseArea {
        anchors.fill: parent
        onClicked: fileSelect.open()
    }

    FileDialog {
        id: fileSelect

        title: "Please choose a file"
        onAccepted: {
            console.log("File chose: " + fileSelect.selectedFile)
        }
        onRejected: {
            console.log("Rejected")
        }
    }
}
