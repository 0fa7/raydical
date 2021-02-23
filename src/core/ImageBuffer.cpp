#include <iostream>
#include <string>

#include "ImageBuffer.hpp"

ImageBuffer::ImageBuffer(const uint32_t width,
                         const uint32_t height) : mWidth(width),
                                                  mHeight(height)
{
    mBuffer.resize(height * width, Color3f());
}

uint32_t ImageBuffer::width() const
{
    return mWidth;
}

uint32_t ImageBuffer::height() const
{
    return mHeight;
}

const std::vector<Vec3f> &ImageBuffer::buffer() const
{
    return mBuffer;
}

Color3f ImageBuffer::pixel(const uint32_t x,
    const uint32_t y) const
{
    return mBuffer[x + (mHeight - y - 1) * mWidth];
}

void ImageBuffer::setPixel(const uint32_t x,
    const uint32_t y,
    const Color3f &color)
{
    mBuffer[x + (mHeight - y - 1) * mWidth] = color;
}

Color3f *ImageBuffer::data()
{
    return mBuffer.data();
}