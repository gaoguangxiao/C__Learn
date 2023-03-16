//
//  main.cpp
//  007-C++多态
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;
//面向对象三大特征：继承 封装 多态

class Animal {
public:
    virtual void prinInfo(){
        cout << "我是动物" << endl;
    }
};

class Cat : public Animal {

public:
    void prinInfo(){
        cout << "我是猫" << endl;
    }
};


class Dog : public Animal {
    
public:
    void prinInfo(){
        cout << "我是狗" << endl;
    }
};

void test01(Animal &a) {
    a.prinInfo();
}

int main(int argc, const char * argv[]) {
    
    //Aimal size = 8
    Animal a;
    cout << "Aimal size = " << sizeof(a) << endl;
    
    Cat c ;
    test01(c);
   
    Dog d;
    test01(d);
    
    return 0;
}
