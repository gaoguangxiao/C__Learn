//
//  main.cpp
//  职工管理系统
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include "WorkerManager.hpp"


int main(int argc, const char * argv[]) {
    
    WorkerManager work;
    
    int choice = 0;
    
    while (true) {
        
        work.showMenu();
        cout << "请输入您的选择" << endl;
        cin >> choice;
        
        switch (choice) {
            case 0:
                work.exitSystem();
                break;
            case 1://增加
                
                break;
            case 2://显示
                
                break;
            case 3://删除
                
                break;
            case 4://修改
                
                break;
            case 5://查找
                
                break;
            case 6://排序
                
                break;
            case 7://清空
                
                break;
            default:
                break;
        }
    }
    
    
   
    return 0;
}
