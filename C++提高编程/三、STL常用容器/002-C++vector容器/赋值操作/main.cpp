//
//  main.cpp
//  赋值操作
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v){
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
    v2 = v1;
    
    vector<int>v3;
    v3.assign(v1.begin(), v1.end());
    printVector(v3);
}

int main(int argc, const char * argv[]) {
    
    test01();
    
    return 0;
}
