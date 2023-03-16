//
//  main.cpp
//  和multiset区别
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
    s.insert(20);

    printSet(s);
    
    pair<set<int>::iterator, bool> ret = s.insert(30);
    
    ret.second;//可查是否插入成功
    
    //允许插入重复数据
    multiset<int> ms;
    ms.insert(10);

}

int main(int argc, const char * argv[]) {
    
    test01();
    
    return 0;
}
