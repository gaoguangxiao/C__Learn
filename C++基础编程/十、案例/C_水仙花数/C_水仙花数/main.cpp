//
//  main.cpp
//  C_水仙花数
//
//  Created by gaoguangxiao on 2023/3/5.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //水仙花数 三位数，每一位 都是3次方，求解数值
    int num = 100;
    do {
        int i = num/100;
        int j = num/10%10;
        int z = num%10;
        int sums = i * i * i + j*j*j +z*z*z;
        if (sums == num) {
            std::cout << "水仙花：" << sums << std::endl;
        }
        num++;
    } while (num < 1000);

    return 0;
}
