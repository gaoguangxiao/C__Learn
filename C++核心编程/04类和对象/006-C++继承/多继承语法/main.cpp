//
//  main.cpp
//  多继承语法
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;

class Father {
public:
    int m_A = 100;
    int m_B = 100;
};

class Father1 {
public:
    int m_B = 200;
    
};


class son : public Father,public Father1{

public:
    int m_C;
    int m_D;

};


int main(int argc, const char * argv[]) {
    // insert code here...
    son s;
//    s sizeof大小
    s.m_A;
    
    //父类出现同名成员 需要加作用域
    cout << "m_B = " << s.Father1:: m_B << endl;

    return 0;
}
