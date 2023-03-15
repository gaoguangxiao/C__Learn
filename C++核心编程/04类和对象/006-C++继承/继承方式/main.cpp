//
//  main.cpp
//  继承方式
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;
class Father {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class son : public Father{
public:
    void printInfo(){
        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
//        cout << "m_C = " << m_C << endl; //父类私有 子类访问不到
        
    }
};

void test01(){
    son s;
    s.m_A = 30;
//    s.m_B = 20;// 父类受保护的属性，外部无法访问
    s.printInfo();
}

class son1 : protected Father{
public:
    void printInfo(){
        m_B = 30;
        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
    }
};

void test02(){
    son1 s1;
//    s1.m_A = 30;//保护继承，子类属性也会变成 保护，外界无法访问
    s1.printInfo();
}

class son2 : private Father{
public:
    void printInfo(){
        m_B = 30;
//        m_C/
        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
    }
};

void test03(){
    son2 s2;
    s2.printInfo();
}

int main(int argc, const char * argv[]) {
//    test01();
    test03();
    
    return 0;
}
