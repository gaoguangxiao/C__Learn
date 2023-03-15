//
//  main.cpp
//  函数调用运算符重载
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;
//定义一个打印的函数 和一个加法函数

class MyPrint {
    
public:
    ostream & operator()(string s){
        cout << s << endl;
        return cout;
    }
};


class MyAdd {
    
public:
    int operator()(int num1,int num2){
        return num1 + num2;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    
    MyPrint myPrint;
    myPrint("你好 世界");
    
    MyAdd myAdd;
    
    cout << myAdd(100,100) << endl;
    
    //匿名函数 无指针指向
    cout << MyAdd()(10,10) << endl;
    
    return 0;
}
