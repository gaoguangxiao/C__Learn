//
//  main.cpp
//  008-C++set容器
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;
#include <set>

void printSet(set<int>&s){
    for(set<int>::iterator it = s.begin();it!=s.end();it++) {
        cout << *it << endl;
    }
}
void test01(){

    set<int>s;
    
    s.insert(10);

    //拷贝
    set<int>s2(s);

    //赋值 =
    printSet(s2);
//    s.size()
//    s.end()
//    s.empty()
}

int main(int argc, const char * argv[]) {
    
    test01();
    
    return 0;
}
