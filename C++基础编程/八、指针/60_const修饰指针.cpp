#include <iostream>
// int * const p = &a;
// const int *p = &a;
// const int * const p = &a;
void test12()
{
    int a = 10;
    int b = 20;
    // 用const修饰指针：指向可以修改但是
    const int *p = &a;
    // *p = 20;//指针指向的值不能修改
    std::cout << p;
    p = &b;
    std::cout << p;
}

int main()
{

    int a = 10;
    int b = 20;

//指针常量：不能修改指向，但可以修改指向的值
    int * const p = &a;
    *p = 30;
    p = &b;
    std::cout << a;
    return 0;
}