#include <iostream>
using namespace std;

//如果某个位置有默认参数，那么从左到右 都必须有默认值
int fun(int a, int b = 20, int c = 30)
{

    return a + b + c;
}

//2、如果函数声明有默认参数，那么函数实现 就不能有默认参数
//声明和实现 只能有一个默认函数

int main()
{

    cout << fun(12) << endl;

    return 0;
}