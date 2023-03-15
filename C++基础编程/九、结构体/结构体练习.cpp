#include <iostream>
// #include <string>

using namespace std;

struct Student
{
    string name; //
    int score;
};

struct Teacher
{
    string name;    // 老师姓名
    Student stu[5]; // 带领的学生
};



// 创建学生
void createStu(Student *stu)
{
    stu->name = "Student_";
    stu->score = rand()% 50 + 50;
}

void prinrStu(Student stu)
{
    cout << "姓名：" << stu.name << "分数：" << stu.score << endl;
}

int main()
{
    Teacher tea[3] = {};

    // 第一个老师
    string needstr = "ABCDE";

 for (int j = 0; j < 3; j++)
 {
    tea[j].name = "老师";
    tea[j].name += needstr[j];
    for (int i = 0; i < 5; i++)
    {
        Student stu = {};
        createStu(&stu);
        stu.name = "student_";
        stu.name += needstr[i]; 
        tea[j].stu[i] = stu;
    }
 }

for (int j = 0; j < 3; j++)
 {
    cout<< "老师" << tea[j].name << endl;
    // 打印第一位老师数据
    for (int i = 0; i < 5; i++)
    {
        prinrStu(tea[j].stu[i]);
    }
 }
    return 0;
}