//
//  main.cpp
//  C_通讯录
//
//  Created by gaoguangxiao on 2023/3/6.
//

#include <iostream>
using namespace std;

#include "AddressBooks.cpp"

void showMenu(){
    cout << "*************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "*************************" << endl;
}

void addPerson (AddressBooks *add){
    //实例化联系人
    Person p = {};
    
    string name;
    cout << "输入联系人姓名" << endl;
    cin >> name;
    p.name = name;
    
    int age;
    cout << "输入联系人年龄" << endl;
    cin >> age;
    
    p.m_Age = age;
    
    add ->p[add -> m_Size] = p;
    add -> m_Size++;
}

//是否存在某个人 返回联系人位置
int isExit(AddressBooks *add,string str){
    for (int i = 0; i < add->m_Size; i++) {
        Person p = add -> p[i];
        if (p.name == str) {
            return i;
        }
    }
    return -1;
}
void delPerson(AddressBooks *add){
    string name;
    cout << "输入联系人姓名" << endl;
    cin >> name;
    
    //检测
    int index = isExit(add, name);
    
    if (index != -1) {
        //执行删除
        for(int i = index;i < add -> m_Size;i++){
            add->p[i] = add->p[i+1];
        }
        add->m_Size -- ;
    } else {
        cout << "查无此人" << endl;
    }
}

void findPerson(AddressBooks *add){
    string name;
    cout << "输入联系人姓名" << endl;
    cin >> name;
    
    //检测
    int index = isExit(add,name);
    if (index != -1) {
        cout << add->p[index].name << endl;
    } else {
        cout << "查无此人" << endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    showMenu();
    int input = 10;
    
    AddressBooks add = {};
    
    while (true) {
        
        cin >> input;
        //        cout << "输入的值：" << input << endl;
        switch (input) {
            case 1:// 1、添加联系人
            {
                addPerson(&add);
            }
                break;
            case 2://2、显示联系人
            {
                for (int i = 0; i<add.m_Size; i++) {
                    Person p =  add.p[i];
                    cout <<
                    "姓名：" << p.name << "  "
                    <<
                    "年龄：" << p.m_Age
                    << endl;
                }
            }
                break;
            case 3:// 3、删除联系人
                delPerson(&add);
                break;
            case 4://4、查找联系人
                findPerson(&add);
                break;
            case 5://5、修改联系人
                
                break;
            case 6://6、清空联系人
                
                break;
            default :
                
                cout << "已退出，欢迎下次使用" << endl;
                
                break;
        }
        
        showMenu();
    }
    
    
    
    return 0;
}
