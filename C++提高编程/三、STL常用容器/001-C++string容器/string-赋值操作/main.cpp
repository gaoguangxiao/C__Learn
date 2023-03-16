//
//  main.cpp
//  string-赋值操作
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
  
    string str = "Hello World";
    string str1 = str;
    
    string str2;
    str2 = 'A';
    
    string str3;
    str3.assign("Hello World");
    
    cout << "str3 = " << str3 << endl;
    return 0;
}
