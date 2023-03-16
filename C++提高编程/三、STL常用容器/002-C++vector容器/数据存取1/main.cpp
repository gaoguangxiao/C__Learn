//
//  main.cpp
//  数据存取1
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
    
    for(int i = 0 ; i < v1.size(); i++){
//        cout << v1[i] << endl;
        cout << v1.at(i) << endl;
    }

    cout << "第一个元素 "<< v1.front() << endl;
    
    cout << "末尾元素 "<< v1.back() << endl;
}

int main(int argc, const char * argv[]) {
    test01();
    
    return 0;
}
