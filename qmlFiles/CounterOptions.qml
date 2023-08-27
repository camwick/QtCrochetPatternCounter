import QtQuick
import QtQuick.Layouts

ColumnLayout {
    RowLayout {
        // file selection button
        FileSelect {
            Layout.preferredHeight: 50
            Layout.preferredWidth: 100
        }

        // combobox of files in predefined folder
        Rectangle {
            Layout.fillWidth: true
            Layout.preferredHeight: 50
            border.width: 2
            border.color: "black"

            Text {
                anchors.centerIn: parent
                text: "ComboBox Placeholder"
            }
        }
    }
    // form of picture settings

    // form of ignore settings

    // count pattern button
}
