#include <iostream>

int main (){

//32系统 指针占据4个字节

//空指针 不可以访问
int *p = NULL;
std::cout << p;//指向0x0

// std::cout << *p;
//
    return 0;
}