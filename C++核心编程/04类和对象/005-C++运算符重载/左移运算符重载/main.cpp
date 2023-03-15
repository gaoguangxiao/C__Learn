//
//  main.cpp
//  左移运算符重载
//
//  Created by gaoguangxiao on 2023/3/13.
//

#include <iostream>

using namespace std;

class Person {
    
public:
    
    int m_A;
    int m_B;
};

ostream &operator<<(ostream &cout,Person &p){
    cout << "m_A = " << p.m_A;
    return cout;
}

void test01(){

    Person p;
    
    p.m_A = 10;
    p.m_B = 10;
    
//    cout << p.m_A << endl;
    std::cout << p << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    test01();
    return 0;
}
