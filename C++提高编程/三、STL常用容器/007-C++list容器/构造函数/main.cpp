//
//  main.cpp
//  构造函数
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
    
//    printList(l);
    
    list<int>l2(l.begin(),l.end());
    printList(l2);
    
    list<int>l3(10,100);
    
    list<int>l4(l3);
    printList(l4);
    
    
}

int main(int argc, const char * argv[]) {
    test01();
    
    return 0;
}
