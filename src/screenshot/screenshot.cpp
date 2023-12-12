#include "screenshot.h"

#include <QGuiApplication>
#include <qapplication.h>

Screenshot::Screenshot(QObject *parent): QObject (parent)
{
    // Constructor logic
}

Screenshot::~Screenshot() {
    // Destructor logic if needed
}

void Screenshot::takeScreenshot() {

    qInfo("Taking snap :3");

    QScreen *screen = QApplication::primaryScreen();
    QPixmap screenshot = screen->grabWindow(0, 0, 0, screen->size().width(), screen->size().height());

    QString filePath = QFileDialog::getSaveFileName(nullptr, "Save Screenshot", "", "Images (*.png *.jpg *.bmp");

       if (!filePath.isEmpty()) {
           screenshot.save(filePath);
       }
   }
