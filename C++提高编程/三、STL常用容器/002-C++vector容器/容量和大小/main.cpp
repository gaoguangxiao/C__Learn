//
//  main.cpp
//  容量和大小
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
    
    if (v1.empty()) {
        cout << "为空" << endl;
    } else {
        cout << "不为空" << endl;
    }
    
    v1.resize(5);//重新指定大小
    
    cout << "容量"  << v1.capacity() << endl;
    cout << "大小"  << v1.size() << endl;
    printVector(v1);
}

int main(int argc, const char * argv[]) {
    test01();
    return 0;
}
