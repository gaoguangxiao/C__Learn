#include <iostream>

using namespace std;

struct Hero
{
    string name; //
    int age;
};

// 创建学生
void createHero(Hero *h)
{
    h->age = rand() % 50 + 10;
}
int main()
{

    Hero h[5] = {};

    string name[5] = {"刘备", "关羽", "张飞", "赵云", "黄忠"};
    for (size_t i = 0; i < 5; i++)
    {
        Hero tmph = {};
        h[i].name = name[i];
        h[i].age = rand() % 20 + 20;
    }

    cout << "排序之前：" << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cout << "英雄：" << h[i].name << "年龄：" << h[i].age << endl;
    }

    // 排序 冒泡排序
    for (size_t j = 0; j < 5; j++)
    {
        for (size_t i = 0; i < 5 - 1; i++)
        {
            if (h[i].age > h[i + 1].age)
            {
                Hero tmp = h[i];
                h[i] = h[i + 1];
                h[i + 1] = tmp;
            }
        }
    }

    cout << "排序之后：" << endl;
    for (size_t i = 0; i < 5; i++)
    {
        cout << "英雄：" << h[i].name << "年龄：" << h[i].age << endl;
    }
}