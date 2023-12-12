#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QObject>
#include <QScreen>
#include <QPixmap>
#include <QFileDialog>

class Screenshot : public QObject
{
    Q_OBJECT

    public:
        Screenshot(QObject *parent = nullptr);
        ~Screenshot();

        static void takeScreenshot();

    private:
        // none
};

#endif // SCREENSHOT_H
