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
    char name[100];
    int age;
};

void test01(){
    
    ifstream ifs;
    
    ifs.open("Person.text",ios::binary|ios::in);

    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
    }
    
    Person p;
    
    ifs.read((char *)&p, sizeof(Person));
    
    cout << "姓名：" << p.name << endl;
    
    ifs.close();
    
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
