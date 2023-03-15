//
//  main.cpp
//  赋值运算符重载
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>

using namespace std;

class Person {
    
public:
    //构造函数
    Person(int age){
        m_Age = new int(age);
        
//        age = 10;
//        return *this;
    }
    
    //深copy
    Person& operator=(Person &p){
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
        m_Age = new int(*p.m_Age);
        return *this;
    }
    
    ~Person(){
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
    }
    
    int *m_Age;
};

void test01(){
    
    Person p1 = Person(10);
    
    Person p2 = Person(20);
    
    Person p3 = Person(30);
    
    p3 = p2 = p1;
    
    cout << p1.m_Age << endl;
    cout << *p1.m_Age << endl;
    
    cout << p2.m_Age << endl;
    cout << *p2.m_Age << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //    std::cout << "Hello, World!\n";
    
    test01();
    
    return 0;
}
