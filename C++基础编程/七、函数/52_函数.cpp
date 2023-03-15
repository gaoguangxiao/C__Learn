#include <iostream>

#include "55_swap.h"

int main()
{

    int a = 10;
    int b = 20;

    // swap(&a, &b);
swap(&a,&b);
    // C++自带函数
    // std::swap(a,b);

    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
}
