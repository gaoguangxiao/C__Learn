//
//  main.cpp
//  菱形继承
//
//  Created by gaoguangxiao on 2023/3/15.
//
#include <iostream>
using namespace std;

class Animal {
public:
    int m_A = 100;
};

class Tuo : public virtual Animal{};

class Sheep :public virtual Animal{};

//利用
class SheepTuo:public Tuo,public Sheep {};

//virtual
//vbpro vbtable表

int main(int argc, const char * argv[]) {
    // insert code here...
    SheepTuo st;
    cout << st.m_A << endl;
//    cout << st.Tuo::m_A << endl;
    return 0;
}
