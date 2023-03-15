#include <iostream>
#include <cmath>
// #include <math.h>

using namespace std;

class Circle
{
    // protected
    public:
    int m_r;
    double calzhouchang()
    {
        return 2 * M_PI * m_r;
    }
};

int main(int argc, char const *argv[])
{

    Circle c;
    c.m_r = 10;
    // c.calzhouchang();
    cout << c.calzhouchang() << endl;
    // printf(c.calzhouchang());
    return 0;
}
