//
//  main.cpp
//  文本文件-读文件
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test01(){

    ifstream ifs;
    
    ifs.open("text.text");
    
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
    }
    
    //读文件
//    char buf[1024] = {0};
//    while (ifs.getline(buf, sizeof(buf))) {
//        cout << buf << endl;
//    }
    
//
//    char buf[1024] = {0};
//    while (ifs >> buf) {
//        cout << buf << endel;
//    }
    
    string buf;
    while (getline(ifs,buf)) {
        cout << buf << endl;
    }
    
    ifs.close();
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    test01();
    
    return 0;
}
