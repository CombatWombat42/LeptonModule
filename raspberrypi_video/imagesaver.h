#ifndef IMAGESAVER_H
#define IMAGESAVER_H

#include <QObject>

class ImageSaver : public QObject
{
    Q_OBJECT
public:
    explicit ImageSaver(QObject *parent = 0);
    
signals:
    
public slots:
    void saveImage(QImage);
    
private:
    char nameBuffer[100];
    int imageCount;
};

#endif // IMAGESAVER_H
