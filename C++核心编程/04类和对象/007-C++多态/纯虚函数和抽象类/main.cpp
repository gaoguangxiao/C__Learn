//
//  main.cpp
//  纯虚函数和抽象类
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;

//抽象类 无法实例化对象；子类必须实现虚函数
class Animal {
public:
    //虚函数
    virtual void prinInfo() = 0;
};

class Cat : public Animal {

public:
    void prinInfo(){
        cout << "我是猫" << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Animal *a = new Cat();
    a->prinInfo();
    return 0;
}
