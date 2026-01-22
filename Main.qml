import QtQuick
import QtQuick.Window


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    visibility: Window.Maximized
    flags: Qt.Window

    Rectangle {
        color: "#f3f3f3"
        height: 400
        width: 400
        x: parent.width
        y: parent.height
    }

}
