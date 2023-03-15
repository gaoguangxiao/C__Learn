//
//  main.cpp
//  C_speculateNum
//
//  Created by gaoguangxiao on 2023/3/5.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //猜测数字
    //系统生成 1~100
    int num = rand()%100 +1;
//    num = 10;
    int input = 0;
    std::cout << "请输入系统生成的数字\n";
    while (input != num) {
        std::cin >> input;
        if (input < num) {
            std::cout << "猜小了\n";
        } else if (input > num) {
            std::cout << "猜大了\n";
        }
    }
    std::cout << "猜对了" << num << std::endl;
    return 0;
}
