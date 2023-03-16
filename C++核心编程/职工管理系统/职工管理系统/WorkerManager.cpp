//
//  WorkerManager.cpp
//  职工管理系统
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include "WorkerManager.hpp"

WorkerManager::WorkerManager(){
    
}

WorkerManager::~WorkerManager(){
    
}


void WorkerManager::showMenu() {
    cout << "************************" << endl;
    cout << "*  欢迎使用职工管理系统 ！ *" << endl;
    cout << "****0、退出职工系统****" << endl;
    cout << "****1、增加职工信息****" << endl;
    cout << "****2、显示职工信息****" << endl;
    cout << "****3、删除离职职工****" << endl;
    cout << "****4、修改职工信息****" << endl;
    cout << "****5、查找职工信息****" << endl;
    cout << "****6、按照变化排序****" << endl;
    cout << "****7、清空所有文档****" << endl;
    cout << "************************" << endl;
}

//退出系统
void WorkerManager::exitSystem() {
    cout << "退出系统，欢迎下次使用" << endl;
    exit(0);
}

void WorkerManager::addWorker() {
    //输入职工 编号
    //姓名
    
    char name[64];
    int  no;
    
    cin >> name;
}
