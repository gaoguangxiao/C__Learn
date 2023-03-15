//
//  main.cpp
//  继承中的同名成员处理
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;

class Father {
    
public:
    int m_A;
    Father(){
        m_A = 100;
    }
    
    void printInfo(){
        cout << "Father ---" << endl;
    }
    
    void printInfo(int a){
        cout << "Father --- a" << endl;
    }

};

class son : public Father{
    
public:
    int m_A;
    
    son(){
        m_A = 200;
    }
    
    void printInfo(){
        cout << "son ---" << endl;
    }
};


void test(){
    son s;

    cout << "son m_A 的值= " <<s.m_A << endl;
    cout << "Father m_A 的值= " <<s.Father::m_A << endl;
    
    s.printInfo();
    s.Father:: printInfo(1);//调用父类方法 加父类作用域
    
    s.Father::printInfo();
}

int main(int argc, const char * argv[]) {
    test();
    
    return 0;
}
