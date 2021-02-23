#ifndef RAYDICAL_CORE_IMAGE_BUFFER_HPP
#define RAYDICAL_CORE_IMAGE_BUFFER_HPP

#include <vector>

#include "Vec3.hpp"

class ImageBuffer
{
public:
    ImageBuffer() = delete;
    ImageBuffer(const uint32_t width, const uint32_t height);
    ~ImageBuffer() = default;
    
    ImageBuffer(const ImageBuffer &other) = delete;
    ImageBuffer(ImageBuffer &&other) = delete;
    ImageBuffer &operator=(const ImageBuffer &rhs) = delete;
    ImageBuffer &operator=(ImageBuffer &&rhs) = delete;

    uint32_t width() const;
    uint32_t height() const;
    const std::vector<Vec3f> &buffer() const;
    Color3f pixel(const uint32_t x, 
        const uint32_t y) const;
    void setPixel(const uint32_t x, 
        const uint32_t y,
        const Color3f &color);
    Color3f *data();

private:
    uint32_t mWidth;
    uint32_t mHeight;
    std::vector<Vec3f> mBuffer;
};

#endif // RAYDICAL_CORE_IMAGE_BUFFER_HPP