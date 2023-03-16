//
//  main.cpp
//  004-案例评委打分
//
//  Created by gaoguangxiao on 2023/3/16.
//

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

class Person {
    
public:
    Person(string name,int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

void createPerson(vector<Person> &v){
    string nex = "ABCDE";
    for(int i = 0;i < 5; i++) {
        string str = "选手";
        str += nex[i];
        Person p = Person(str, 0);
        v.push_back(p);
    }
}

void setScore(vector<Person> &v){
    
    for(vector<Person>::iterator it = v.begin();it != v.end();it++){

        deque<int>d;
        for(int j = 0;j < 10; j++) {
            int score = rand()%41+60;
            d.push_back(score);
        }

//        for(deque<int>::iterator it = d.begin();it != d.end();it++){
//            cout<< "分数" << *it << endl;
//        }
        
        sort(d.begin(), d.end());
        
        d.pop_back();
        d.pop_front();
        
        int sumScore = 0;
        
        for(deque<int>::iterator dit = d.begin();dit != d.end();dit++){
            sumScore += *dit;
        }
                
        int avg = sumScore/8;
        
        it->m_Age = avg;
        
//        cout << "分数 = " << it->m_Age << endl;
        
    }
    
}

void printPeronInfo(vector<Person> &v){
    for(int i = 0;i < 5; i++) {
        Person p = v[i];
        cout << "姓名："<< p.m_Name << " 年龄："  << p.m_Age << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    vector<Person>v;
    createPerson(v);

    setScore(v);
    printPeronInfo(v);
    return 0;
}
