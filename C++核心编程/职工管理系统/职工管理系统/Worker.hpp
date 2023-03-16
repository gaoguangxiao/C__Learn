//
//  Worker.hpp
//  职工管理系统
//
//  Created by gaoguangxiao on 2023/3/16.
//

#ifndef Worker_hpp
#define Worker_hpp

#include <iostream>
#include <string>
using namespace std;

class Worker {
    
public:
    virtual void showInfo() = 0;
    
    //获取职工岗位
    virtual void getDepName() = 0;
    
    int m_Id;
    string name;
    int m_DepId;
};

#endif /* Worker_hpp */
