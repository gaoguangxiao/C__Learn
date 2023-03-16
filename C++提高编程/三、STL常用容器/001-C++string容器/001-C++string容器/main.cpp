//
//  main.cpp
//  001-C++string容器
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
   
    string s;
    cout << "s = " << s << endl;
    
    const char *str = "Hello World";
    string s2 = string(str);
    cout << "s2 = " << s2 << endl;
    
    string s3(s2);
    cout << "s3 = " << s3 << endl;
    return 0;
}
