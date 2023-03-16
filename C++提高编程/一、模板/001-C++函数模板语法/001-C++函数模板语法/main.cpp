//
//  main.cpp
//  001-C++函数模板语法
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;

void swapInt(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swapT(T &a,T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 20;
    
//    swapInt(a, b);
    
    //1、自动推导
//    swapT(a, b);
    //2、显示指定类型
    swapT<int>(a, b);
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
