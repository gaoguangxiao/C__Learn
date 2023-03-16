//
//  main.cpp
//  多态案例-计算器实现
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;

class AbstractCalculator {
    
public:
    virtual int getResult(){
        return 0;
    }
    int m_Num1;
    int m_num2;
};

class AddCalculator : public AbstractCalculator {
    
public:
    int getResult() {
        return m_Num1 + m_num2;
    }
};

class SubCalculator : public AbstractCalculator {
    
public:
    int getResult() {
        return m_Num1 - m_num2;
    }
};


class MulCalculator : public AbstractCalculator {
    
public:
    int getResult() {
        return m_Num1 * m_num2;
    }
};

void test01(){
    AbstractCalculator *add = new AddCalculator;
    add ->m_Num1 = 10;
    add ->m_num2 = 10;
    
    cout << add -> m_Num1 << "+"  << add->m_num2 << " = "<< add->getResult() << endl;
    
//    AbstractCalculator *a;
//    a.,
}

int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
