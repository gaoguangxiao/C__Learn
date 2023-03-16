//
//  WorkerManager.hpp
//  职工管理系统
//
//  Created by gaoguangxiao on 2023/3/16.
//

#ifndef WorkerManager_hpp
#define WorkerManager_hpp

#pragma once //防止头文件包含
#include <iostream>

using namespace std;

class WorkerManager {
public:
    WorkerManager();
    
    ~WorkerManager();
    
    //展示菜单
    void showMenu();
    
    //退出系统
    void exitSystem();
    
    //增加职工
    void addWorker();
};


#endif /* WorkerManager_hpp */
