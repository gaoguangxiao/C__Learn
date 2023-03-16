//
//  main.cpp
//  009-C++map容器
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;

#include <map>


void test01(){
    map<int, int>m;
    
    m.insert(pair<int, int>(1,10));
    
    //拷贝构造
    
//    m.size()
//    m.count()
}

int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
