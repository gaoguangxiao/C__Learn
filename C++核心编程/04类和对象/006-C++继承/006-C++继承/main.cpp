//
//  main.cpp
//  006-C++继承
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;
//面向对象三大特征：继承 封装 多态

class Animal {
    
public:
    
    void prinInfo(){
        
    }
    void head(){
        cout << "头部" << endl;
    }
    
    void content(){
        cout << "身体部分" << endl;
    }
    
    void foot(){
        cout << "尾部" << endl;
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

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Cat a;
    a.prinInfo();
    a.head();
    a.content();
    a.foot();
    
    Dog d;
    d.prinInfo();
    d.head();
    d.content();
    d.foot();
    
    return 0;
}
