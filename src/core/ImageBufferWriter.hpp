#ifndef RAYDICAL_CORE_WRITE_IMAGE_BUFFER_HPP
#define RAYDICAL_CORE_WRITE_IMAGE_BUFFER_HPP

#include <filesystem>
#include <fstream>

#include "ImageBuffer.hpp"

class ImageBufferWriter
{
public:
    ImageBufferWriter() = delete;
    ~ImageBufferWriter() = default;
    
    static void write(const ImageBuffer &ib,
        const std::filesystem::path &path,
        std::ostream *out = nullptr);
};

#endif // RAYDICAL_CORE_WRITE_IMAGE_BUFFER_HPP