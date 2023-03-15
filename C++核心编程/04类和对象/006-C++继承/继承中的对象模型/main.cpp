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
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class son : public Father{
public:
    int m_D;
    
};
int main(int argc, const char * argv[]) {
    // insert code here...
    
    son s;
    
//    cl /d1 reportSingleClassLayoutSon main.cp 打印对象结构
    cout << sizeof(s) << endl;
    
    return 0;
}
