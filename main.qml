import QtQuick
import QtQuick.Window
import QtQuick.Dialogs
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    File {
        id: fileDialog
    }

    Button {
        text: "open file dialog"
        onPressed: {
            fileDialog.open()
        }
    }
}
