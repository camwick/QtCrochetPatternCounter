import QtQuick
import QtQuick.Layouts

RowLayout {
    // Counter
    CounterNav {
        id: counterNav
        Layout.preferredHeight: rowHeight
        Layout.fillWidth: true
    }

    // Settings
    SettingsNav {
        id: settingsNav
        Layout.preferredHeight: rowHeight
        Layout.fillWidth: true
    }

    // About
    AboutNav {
        id: aboutNov
        Layout.preferredHeight: rowHeight
        Layout.fillWidth: true
    }
}
