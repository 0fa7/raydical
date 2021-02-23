#pragma once

template <typename T>
class Vec3
{
public:
    Vec3() :
        x(0.0f), y(0.0f), z(0.0f)
    {
    }

    Vec3(T _x, T _y, T _z) : 
        x(_x), y(_y), z(_z)
    {
    }

    ~Vec3()
    {
    }

    union 
    {
        T x;
        T r;
    };

    union 
    {
        T y;
        T g;
    };

    union 
    {
        T z;
        T b;
    };
};

using Vec3f = Vec3<float>;
using Vec3i = Vec3<int>;
using Point3f = Vec3f;
using Point3i = Vec3i;
using Color3f = Vec3f;
using Color3i = Vec3i;