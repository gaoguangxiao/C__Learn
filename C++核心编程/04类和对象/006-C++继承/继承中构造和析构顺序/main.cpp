//
//  main.cpp
//  继承中的对象模型
//
//  Created by gaoguangxiao on 2023/3/15.
//

#include <iostream>
using namespace std;

class Father {
    
public:
    Father(){
        cout << "Father 构造函数" << endl;
    }
    
    ~Father(){
        cout << "Father 析构函数" << endl;
    }
};

class son : public Father{
    
public:
    son(){
        cout << "son 构造函数" << endl;
    }
    
    ~son(){
        cout << "son 析构函数" << endl;
    }
    
};


void test(){
    son s;
    /**
     先有父类构造函数 再有子类，销毁顺序相反
     Father 构造函数
     son 构造函数
     son 析构函数
     Father 析构函数
     */
}

int main(int argc, const char * argv[]) {
    test();
    
    return 0;
}
