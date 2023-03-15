#include <iostream>
#include <string>
// 整型
// void intDateType
// {
//     short num = 10;      // 2个字节
//     int num1 = 10;       // 4个字节
//     long num2 = 10;      // wndows 4 linux 64位 8
//     long long num3 = 10; // 8
//     // sizeof 查询该对象占据内存多大
//     std::cout << "short字节数" << sizeof(num) << "\n";
//     std::cout << sizeof(num1);
// }

// 实数
 void floatDataType()
 {
     float a = 10.91;  // 4字节
     double b = 20.09; // 8字节

     float c = 3e2; // 科学计算

     std::cout << sizeof(a);
     std::cout << sizeof(b);
     std::cout << c;
 }

 void charDataType()
 {
     // 字符 0~31 控制字符
     char a = 'a'; // 1个字节 97
     char A = 'A'; // 65

     std::cout << (int)a;
     std::cout << (int)A;
 }

void zyDataType()
{

    // 转义字符
    // 水平制表符 整齐输出
    std::cout << "a\thelloWold\n";
    std::cout << "aa\tHelloWold\n";
    std::cout << "aaa\tHelloWold\n";
}

void stringDataType()
{
    // 字符串
    char a[] = "112231";
    // string b = "121";
    std::cout << a;
}

// 布尔 占据一个字节
int main()
{
    // scanf($);
    int a = 0;
    std::cout << "请键入输入值 a" << std::endl;
    std::cin >> a;
    // cin >> a;
     std::cout << "输出的值" << a << std::endl;

    // 数据输入 输出
    return 0;
}

// 实数
