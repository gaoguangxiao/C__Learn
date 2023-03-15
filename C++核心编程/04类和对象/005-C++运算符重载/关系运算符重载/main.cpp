//
//  main.cpp
//  关系运算符重载
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>

using namespace std;

class Person {
    
public:
    
    Person(string name,int age){
        this->m_Name = name;
        this->m_Age  = age;
    };
    
    bool operator==(Person &p){
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return  true;
        }
        return false;
    }
    
    string m_Name;
    int m_Age;
};

void test01(){
    
    Person p1 = Person("张三", 12);
    
    Person p2 = Person("李四", 12);
    
    if (p1 == p2) {
        cout << "p1 和 p2 相等";
    } else {
        cout << "p1 和 p2 不相等";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    
    return 0;
}
