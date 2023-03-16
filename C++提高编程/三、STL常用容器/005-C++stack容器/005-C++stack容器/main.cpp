//
//  main.cpp
//  005-C++stack容器
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <stack>

using namespace std;

void test01(){
    
    stack<int> s;
    
    //入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    
    cout << "stack size:" << s.size() << endl;
    
    while (!s.empty()) {
        
        cout << s.top() << endl;
        
        s.pop();
    }
    
    cout << "stack size:" << s.size() << endl;
//    s.pop();//出栈
}

int main(int argc, const char * argv[]) {
    // insert code here...
//   先入后出
    
    test01();
    
    return 0;
}
