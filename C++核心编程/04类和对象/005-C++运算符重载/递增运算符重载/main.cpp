//
//  main.cpp
//  递增运算符重载
//
//  Created by gaoguangxiao on 2023/3/14.
//

#include <iostream>

using namespace std;

class MyInteger {
    
public:
    
    MyInteger &operator++(){
        m_Num++;
        return *this;
    }
    
    //重载前置--
    MyInteger &operator--(){
        m_Mum--;
        return *this;
    }
    
    //代表后置++
    MyInteger operator++(int){
//        后置++先 返回 再递增
        MyInteger tmp = *this;
        m_Num++;
        return tmp;
    }
    
    MyInteger(){
        m_Num = 0;
    }
    
//private:
    int m_Num;
    
    int m_Mum;
};

//左移运算符
ostream & operator<<(ostream &cout,MyInteger myInt){
    cout << "m_num = " << myInt.m_Num << " m_Mum = " << myInt.m_Mum;
    return cout;
}

void test01(){
    MyInteger myInt;
    
    myInt.m_Mum = 10;
    
    cout << ++myInt << endl;
    
    //后置递增
    cout << myInt++ << endl;
    
    cout << --myInt << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    test01();
    
    return 0;
}
