//
//  main.cpp
//  插入和删除
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
    
//    printVector(v1);
//    v1.pop_back();
//    v1.insert(v1.begin(), 11);
    
    v1.insert(v1.begin(), 2 ,11);
    
//    v1.clear();
    
    printVector(v1);

}


int main(int argc, const char * argv[]) {
    
    test01();
    
    return 0;
}
