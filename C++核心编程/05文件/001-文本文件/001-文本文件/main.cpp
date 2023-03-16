//
//  main.cpp
//  001-文本文件
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <unistd.h>
using namespace std;

#include <fstream>

void test01(){

    cout << "创建文件" << endl;
    
    ofstream ofs;//创建流
    
    //2、指定写方式
    ofs.open("text.txt");
//    ofs.open("text.text");
    
//    ofs.open
    //3、写入
    ofs << "姓名：张三" << endl;
    
    //4、关闭
    ofs.close();
    
}

int main(int argc, const char * argv[]) {
   
#include <fstream>

    //获取路径
    char pwd[250];
    getcwd(pwd, sizeof(pwd));
    cout << pwd << endl;
    
    test01();
    
    return 0;
}
