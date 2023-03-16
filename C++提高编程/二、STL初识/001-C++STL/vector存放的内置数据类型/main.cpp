//
//  main.cpp
//  vector存放的内置数据类型
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> //标准算法

void printInfo(int val){
    cout << val << endl;
}

void test01(){

    vector<int> v;//创建一个vector
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    //通过迭代器访问
    vector<int>::iterator itBegin = v.begin();//容器第一个位置
    vector<int>::iterator itEned  = v.end();//容器最后一个位置 的下一个 位置
    
    //第一种遍历
//    while (itBegin != itEned) {
//        cout << *itBegin << endl;
//        itBegin++;
//    }
    
//    for(vector<int>::iterator it = v.begin() ; it != v.end();it++) {
//        cout << *it << endl;
//    }
    
    for_each(v.begin(), v.end(), printInfo);
    
}

int main(int argc, const char * argv[]) {
    
//   容器 vector
//   算法 for-each
//   迭代器 vector<int>::iterator 迭代器
    
    test01();
    
    return 0;
}
