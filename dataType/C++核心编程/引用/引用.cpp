#include <iostream>
using namespace std;

void test1()
{
    int a = 10;
    // 取别名
    int &b = a;
    cout << a << endl;
    b = 30;
    cout << a << endl; // 打印30
}
int main()
{

    int a = 10;
    int b = 20;
    // int &c;//1、错误，必须初始化
    int &c = a;
    cout << a << endl;
    c = b;//2、初始化之后不能再次修改
    // 赋值操作
    cout << a << endl;

    //本质 指针常量， 自动转化 *ref

    return 0;
}