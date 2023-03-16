//
//  main.cpp
//  赋值和交换
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l) {
    for(list<int>::iterator it = l.begin();it != l.end() ; it ++) {
        cout << *it << endl;
    }
}

void test01(){
    
    list<int> l ;
    
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    
    list<int>l2 = l;
    printList(l2);
    
    //区间 拷贝 赋值
    list<int>l3;
    l3.assign(l2.begin(),l2.end());
    
}

int main(int argc, const char * argv[]) {
    test01();
    
    return 0;
}
