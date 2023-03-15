//
//  AddressBooks.cpp
//  C_通讯录
//
//  Created by gaoguangxiao on 2023/3/6.
//

#include "AddressBooks.hpp"
#include "Person.cpp"

#define MAX 1000

struct AddressBooks {
    struct Person p[MAX];
    int m_Size;//人员个数
};
