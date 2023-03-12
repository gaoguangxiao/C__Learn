#include <iostream>
// #include <string>

using namespace std;

struct Person
{
    char name; // 1
    int age;   // 4
    string no; // 8
};

void test()
{
    struct Person p1 = {'A', 12, "1222"};

    Person p = {};
    p.name = 'A';
    p.no = "121404020104";

    // std::cout << p.name << endl;
    // std::cout << p.no;
}

void test2(const Person pp)
{
    // pp.age = 40;
    cout << pp.age;
}
int main()
{

    Person p4 =
        {'B', 12, "121"};

    test2(p4);
    // Person *p7 = &p4;

    // cout << sizeof(p7) << endl;

    // cout << p7;

    return 0;
}