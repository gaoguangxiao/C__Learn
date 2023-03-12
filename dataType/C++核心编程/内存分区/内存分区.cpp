#include <iostream>
using namespace std;

int main()
{

    /**
     *
     * 程序运行前存在
     * 代码区 ：可读属性，防止被修改
     *
     * 全局区：全局变量，静态变量
     * 常量区，字符串常量，其他常量
     *
     * 栈区：指针的值
     *
     * **/

    int a = 10;
    int *p = &a;

    cout << "a的内存地址：" << &a << endl;

    cout << "p的内存地址：" << p << endl;
    return 0;
}