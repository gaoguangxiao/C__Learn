//
//  main.cpp
//  运算符重载
//
//  Created by gaoguangxiao on 2023/3/13.
//

#include <iostream>
using namespace std;

class Person {
    
public:
    //成员函数重载+号
//    Person operator+(Person &p) {
//        Person temp;
//        temp.m_A = this->m_A + p.m_A;
//        temp.m_B = this->m_B + p.m_B;
//        return temp;
//    }
    
    int m_A;
    int m_B;
};

//全局函数重载operator
Person operator+(Person &p,Person &p1) {
    Person temp;
    temp.m_A = p1.m_A + p.m_A;
    temp.m_B = p1.m_B + p.m_B;
    return temp;
}

void test01(){
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    
    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;
    
    //1、理解成员函数调用本质
//    p1.operator=(<#const Person &#>)
    
//    2、全局函数重载
//    Person p3 = p1 + p2;
    Person p3 = operator+(p1,p2);

    cout << p3.m_A << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    test01();
    return 0;
}
