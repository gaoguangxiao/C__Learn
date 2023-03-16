//
//  main.cpp
//  002-二进制文件
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <unistd.h>
using namespace std;
#include <fstream>


class Person {
  
public:
    char name[64];
    int age;
};

void test01(){
    
    ofstream ofs;
    
    ofs.open("Person.txt",ios::binary|ios::out);
    
    Person p = {"张三",12};
    
    ofs.write((const char*)&p, sizeof(p));
    
    ofs.close();
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //获取路径
    char pwd[250];
    getcwd(pwd, sizeof(pwd));
    cout << pwd << endl;
    
    test01();
    
    return 0;
}
