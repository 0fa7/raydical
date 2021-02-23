#include <gtest/gtest.h>

#include "core/ImageBufferWriter.hpp"

TEST(ImageBufferWriterTest, WriteHeaderTest)
{
    std::string expected = 
        "P3\n"
        "1 1\n"
        "255\n"
        "0 0 0\n";
    ImageBuffer ib(1, 1);
    std::stringstream sut;

    ImageBufferWriter::write(ib, "./fake/path.ppm", &sut);

    EXPECT_EQ(expected, sut.str());
}

TEST(ImageBufferWriterTest, WriteTest)
{
    std::string expected = 
        "P3\n"
        "4 3\n"
        "255\n"
        "255 0 127\n"
        "0 0 0\n"
        "0 0 0\n"
        "0 0 0\n"
        "0 0 0\n"
        "0 0 0\n"
        "0 0 0\n"
        "0 0 0\n"
        "255 0 127\n"
        "0 0 0\n"
        "0 0 0\n"
        "0 0 0\n";

    ImageBuffer ib(4, 3);
    std::stringstream sut;
    ib.setPixel(0, 0, {255, 0, 127});
    ib.setPixel(0, 2, {255, 0, 127});
    ImageBufferWriter::write(ib, "./fake/path.ppm", &sut);

    EXPECT_EQ(expected, sut.str());
}