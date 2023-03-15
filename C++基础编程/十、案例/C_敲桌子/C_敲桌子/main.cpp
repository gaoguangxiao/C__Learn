//
//  main.cpp
//  C_敲桌子
//
//  Created by gaoguangxiao on 2023/3/6.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    /**
     从1开始到数字100，数字个位含7 或者数字十位含7，或者为7的倍数输出敲桌子，否则打印输出
     */
    
    for (int i = 1; i<=100; i++) {
        if (i%10 == 7 || i/10 == 7 || i%7 == 0) {
            std::cout << "敲桌子" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
        
    }
    return 0;
}
