//
//  main.cpp
//  虚析构和纯虚析构
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;

#include <string>


//抽象类 无法实例化对象；子类必须实现虚函数
class Animal {
public:
    Animal(){
        cout << "Animal 构造函数" << endl;
    }
    
//    virtual ~Animal(){
//        cout << "Animal 析构函数" << endl;
//    }
    
    virtual~Animal() = 0;
    
    //虚函数
    virtual void prinInfo() = 0;
};

Animal::~Animal(){
    cout << "Animal 析构函数" << endl;
}

class Cat : public Animal {
    
public:
    Cat(string name){
        
        m_Name = new string(name);
        
        cout << "Cat 构造函数" << endl;
    }
    ~Cat(){
        cout << "Cat 析构函数" << endl;
    }
    void prinInfo(){
        cout << *m_Name << "我是猫" << endl;
    }
    string *m_Name;
};

void test01(){
    Animal *a = new Cat("Tom");
    a->prinInfo();
    
    delete a;
//    Cat c;
//    c.prinInfo();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    return 0;
}
