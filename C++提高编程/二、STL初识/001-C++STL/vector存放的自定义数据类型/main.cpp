//
//  main.cpp
//  vector存放的自定义数据类型
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Person {
    
public:
    
    Person(string name,int age){
        this -> m_Name = name;
        this -> m_Age = age;
    }
    string m_Name;
    int m_Age;
};

void test01(){
    
    vector<Person> v;//创建一个vector
    
    Person p1 = Person("A", 10);
    Person p2 = Person("B", 20);
    Person p3 = Person("C", 30);
    Person p4 = Person("D", 40);
    
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    
    for(vector<Person>::iterator it = v.begin();it < v.end();it++){
//        cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
        cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//        cout <<  << endl;
    }
}


void test02(){
    
    vector<Person*> v;//创建一个vector
    
    Person p1 = Person("A", 10);
    Person p2 = Person("B", 20);
    Person p3 = Person("C", 30);
    Person p4 = Person("D", 40);
    
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    
    for(vector<Person*>::iterator it = v.begin();it < v.end();it++){

        cout << "姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
//        cout << "姓名：" << (*it)->m_Name << " 年龄：" << it->m_Age << endl;
//        cout <<  << endl;
    }
    
    
}

int main(int argc, const char * argv[]) {
   
//    test01();
    
    test02();
    
    return 0;
}
