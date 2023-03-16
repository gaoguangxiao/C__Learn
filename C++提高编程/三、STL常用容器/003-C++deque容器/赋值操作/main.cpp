//
//  main.cpp
//  赋值操作
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> &v){
    for(deque<int>::const_iterator i = v.begin(); i < v.end();i ++){
        cout << *i << endl;
    }
}

void test01(){
    
    deque<int>d;
    for(int i = 0; i < 10 ; i++){
        d.push_back(i);
    }
    
    //等号
    deque<int>d2 = d;
    
//    deque<int>d3(10,100);
    printDeque(d);
    
}

int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
