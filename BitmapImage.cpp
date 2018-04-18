#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), pixelDepth(8) {
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg" || fileExt == "png") {
        // load image file (also from PNG)
        // decompress into buffer
        return true;
    }
    return false;

}

bool BitmapImage::save(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // save image file
        return true;
    }
    return false;
}

void BitmapImage::resize(int width, int height) {
    //resize
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
