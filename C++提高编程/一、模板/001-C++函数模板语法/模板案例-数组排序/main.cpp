//
//  main.cpp
//  模板案例-数组排序
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
using namespace std;
//char数组

template <typename T>
void mySwap(T &a,T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
void mySort(T arr[],int len) {
    //选择排序
    for (int i = 0; i < len;i++) {
        int max = i;
        for(int j = i + 1; j < len; j++){
            if (arr[max] < arr[j]) {
                max = j;
            }
        }
        if (max != i) {
            mySwap(arr[i], arr[max]);
        }
    }
    
}

void test01(){
    
    char charArr[] = "badaigbf";
    
    int len = sizeof(charArr)/sizeof(char);
    
    mySort(charArr, len);
    
    cout << charArr << endl;
    
}

template <typename T>
void printInfo(T arr[],int len){
    for (int i = 0; i < len;i++) {
        cout << arr[i] << endl;
    }
    
}

void test02(){
    
    int intArr[] = {1,4,2,3};
    
    int len = sizeof(intArr)/sizeof(int);
    
    mySort(intArr, len);
    
    printInfo(intArr, len);
    
}

int main(int argc, const char * argv[]) {
    
    //    test01();
    
    test02();
    
    return 0;
}
