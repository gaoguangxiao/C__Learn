//
//  main.cpp
//  函数模板注意事项
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;

template <typename T>
void swapT(T &a,T &b) {
    T temp = a;
    a = b;
    b = temp;
}


//2、必须推出模板类型
template <typename T>
void func() {
    cout << "调用func" << endl;
}

void tesr02(){
//    func();
    func<int>();
}

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 20;
    //1、必须推导出数据类型一致才能使用
//    float b = 20;
    swapT(a, b);
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
