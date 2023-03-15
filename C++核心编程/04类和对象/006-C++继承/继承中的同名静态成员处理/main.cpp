//
//  main.cpp
//  继承中的同名静态成员处理
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;

class Father {
    
public:
    static int m_A;
    
    static void printInfo(){
        cout << "Father ---" << endl;
    }
    
};


int Father::m_A = 100;


class son : public Father{

public:
    static int m_A;

    static void printInfo(){
        cout << "son ---" << endl;
    }
};

int son::m_A = 200;

void test(){
    son s;
    //成员变量
    cout << "son m_A 的值= " <<s.m_A << endl;
    cout << "Father m_A 的值= " <<s.Father::m_A << endl;
    
    //方法调用
    s.printInfo();
    s.Father::printInfo();
    son::printInfo();
    son::Father::printInfo();
}

int main(int argc, const char * argv[]) {
    test();
    
    return 0;
}
