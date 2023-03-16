//
//  main.cpp
//  002-C++vector容器
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
//    printVector(v1);

    vector<int>v2(v1.begin(),v1.end());
    printVector(v2);
    
    vector<int>v3(10,100);
    printVector(v3);
    
    vector<int>v4(v1);
    printVector(v4);
}

int main(int argc, const char * argv[]) {
    
    test01();
    return 0;
}
