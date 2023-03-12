//
//  main.cpp
//  C_99乘法表
//
//  Created by gaoguangxiao on 2023/3/6.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    for (int i = 1 ; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << "*" << i << "=" << i * j << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}
