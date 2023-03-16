//
//  main.cpp
//  插入和删除
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
    
//    d.push_back(<#const value_type &__v#>) 尾部插入
//    d.push_front(<#const value_type &__v#>)
    
//    d.pop_back()
//    d.pop_front() 头删除
    
    d.insert(d.begin(), 2,12);
    
    printDeque(d);
}

int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
