#include <gtest/gtest.h>

#include "core/ImageBuffer.hpp"

TEST(ImageBufferTest, ConstructorWithParamsTest)
{
    uint32_t width = 600;
    uint32_t height = 480;
    uint32_t ix = 0;
    uint32_t jx = 0;
    Color3f emptyVec3f;
    ImageBuffer sut(width, height);

    for(;ix < width; ix++)
    {
        for(; jx < height; jx++)
        {
            EXPECT_EQ(emptyVec3f, sut.pixel(ix, jx));
        }
    }
    
    EXPECT_EQ(width, ix);
    EXPECT_EQ(height, jx);
}

TEST(ImageBufferTest, WidthTest)
{
    uint32_t expectedWidth = 600;
    uint32_t expectedHeight = 480;
    ImageBuffer sut(expectedWidth, expectedHeight);

    EXPECT_EQ(expectedWidth, sut.width());   
}

TEST(ImageBufferTest, HeightTest)
{
    uint32_t expectedWidth = 600;
    uint32_t expectedHeight = 480;
    ImageBuffer sut(expectedWidth, expectedHeight);

    EXPECT_EQ(expectedHeight, sut.height());   
}

TEST(ImageBufferTest, GetSetPixelTest)
{
    Color3f expected(255.0f, 0.0f, 0.0f);
    ImageBuffer sut(600, 480);
    sut.setPixel(50, 100, expected);

    EXPECT_EQ(expected, sut.pixel(50, 100));   
}