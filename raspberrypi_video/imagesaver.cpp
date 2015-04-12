#include "imagesaver.h"

ImageSaver::ImageSaver(QObject *parent) :
    QObject(parent)
{
    memset(nameBuffer,0,100);
    imageCount = 0;
}

//when the system calls setImage, we'll set the label's pixmap
void ImageSaver::saveImage(QImage image) {
    sprintf(nameBuffer,"leptonImage%08d.png",imageCount);
    imageCount++;
    image.save(nameBuffer);
    printf("Saving file to %s\n",nameBuffer);
}
