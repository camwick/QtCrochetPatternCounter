import QtQuick
import QtQuick.Window
import QtQuick.Layouts

Item {
    width: rightDisplayArea.visible ? optionsWidth + rightDisplayArea.Layout.preferredWidth : optionsWidth
    height: rightDisplayArea.visible ? optionsHeight + rightDisplayArea.Layout.preferredHeight : 640
    visible: true

    readonly property int optionsWidth: 480
    readonly property int optionsHeight: optionsWidth * 2
    readonly property int rowHeight: 50
    readonly property int buttonBorderWidth: 2
    readonly property int buttonRadius: 5
    readonly property color buttonColor: "gainsboro"

    RowLayout{
        id: mainLayout
        anchors.fill: parent
        Layout.margins: 2

        // Options Area
        LeftDisplayArea{
            id: leftDisplayArea
            Layout.fillHeight: true
            Layout.preferredWidth: optionsWidth
            Layout.alignment: Qt.AlignTop
        }

        // File Preview
        RightDisplayArea {
            id: rightDisplayArea
            Layout.preferredWidth: 800 // make this size of image eventually
            Layout.fillHeight: true
            Layout.alignment: Qt.AlignRight
            Layout.margins: 5
            visible: false
        }
    }
}
