//
//  main.cpp
//  互换容器
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v){
    for (vector<int>::iterator i = v.begin();i != v.end();i++) {
        cout << *i << endl;
    }
}

void test01(){
    
    vector<int> v1;
    for(int i = 0;i < 10; i++){
        v1.push_back(i);
    }
    
    vector<int> v2;
    for(int i = 10;i > 0; i--){
        v2.push_back(i);
    }
    
    printVector(v1);
    printVector(v2);
    
    v1.swap(v2);
//    printVector(v1);
//    printVector(v2);
    
    
}

void test02(){
    
    vector<int> v;
    for(int i = 0;i < 1000; i++){
        v.push_back(i);
    }
    
    cout << "容量" << v.capacity() << endl;
    
    v.resize(9);
    
    vector<int>(v).swap(v);
    
    cout << "容量" << v.capacity() << endl;
}

int main(int argc, const char * argv[]) {
    
//    test01();
    
    test02();
    
    return 0;
}
