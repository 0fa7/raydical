#include <iostream>

//#include "core/ImageBufferWriter.hpp"
#include "core/Vec3.hpp"

int main()
{
    std::cout << "raydical\n";
    //ImageBuffer ib(600, 400);
    //ib.setPixel(0, 0, {255,0,0});
    //ib.setPixel(0, 2, {255,0,0});
    //ImageBufferWriter::write(ib, "render.ppm");
    Point3f v1(1.0f, 2.2f, 5.7f);

    std::cout << v1.x << " " << v1.y << " " << v1.z << "\n";
    return 0;
}