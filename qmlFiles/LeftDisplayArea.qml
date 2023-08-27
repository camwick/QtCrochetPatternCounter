import QtQuick
import QtQuick.Layouts

ColumnLayout{
    id: optionsBoxLayout

    Navbar {
        id: navBar
        Layout.margins: 2
        Layout.preferredHeight: rowHeight
        Layout.alignment: Qt.AlignTop
    }

    CounterOptions {
        id: counterOptions
        Layout.margins: 2
        Layout.fillHeight: true
        Layout.preferredWidth: optionsWidth
        Layout.alignment: Qt.AlignTop
        // eventually control visibility with navbar
        visible: true
    }

    Settings {
        // eventually control visibility with navbar
        visible: false
    }

    About {
        // eventually control visibility with navbar
        visible: false
    }
}
