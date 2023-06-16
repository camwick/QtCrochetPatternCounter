import QtQuick
import QtQuick.Dialogs

FileDialog {
    title: "Please choose a file"
    onAccepted: {
        console.log("File chose: " + fileDialog.fileUrls)
    }
    onRejected: {
        console.log("Rejected")
    }
}
