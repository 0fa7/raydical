#include <string>

#include "ImageBufferWriter.hpp"

void ImageBufferWriter::write(const ImageBuffer &ib,
    const std::filesystem::path &path,
    std::ostream *outPtr)
{
    std::unique_ptr<std::ofstream> outUniquePtr;
    
    if(!outPtr)
    {
        outUniquePtr = std::make_unique<std::ofstream>(path); 
        outPtr = outUniquePtr.get();
    }

    //ppm header
    *outPtr << "P3\n";
    *outPtr << std::to_string(ib.width()) << " " <<
        std::to_string(ib.height()) << "\n";
    *outPtr << "255\n";

    // ppm data
    for(auto &pixel : ib.buffer())
    {
        *outPtr << static_cast<int>(pixel.r) << " " <<
            static_cast<int>(pixel.g) << " " <<
            static_cast<int>(pixel.b) << "\n";
    }
}