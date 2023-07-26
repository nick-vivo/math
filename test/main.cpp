#include "point.cc"
#include <iostream>

int main()
{
    math::point<int> a;
    std::cout << a.x() << " " << a.y();
    return 0;
}