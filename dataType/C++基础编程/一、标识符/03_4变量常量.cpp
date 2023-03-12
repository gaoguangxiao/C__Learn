// #include <iosream>
#include <iostream>

#define Day 7

int main(int argc, char const *argv[])
{

    int a = 10; // 定义名字为a的变量

    // Day = 8; // expression is not assignable 不可

    std::cout << "一周总共有" << Day << "天\n";

    const int month = 12;
    // month = 24;//variable 'month' declared const here
    std::cout << "一年有" << month << "个月份";

    system("pause");
    return 0;
}
