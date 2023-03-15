#include <iostream>
#include <string>

using namespace std;

class Building
{
    // 将friend写进入类中，既可以实现某些类访问
    friend void GoodGayfun(Building *building);

    friend class GoodGay;

public:
    string m_SittingRoom;
    Building()
    {
        m_SittingRoom = "客厅";
        m_Bedroom = "卧室";
    };

private:
    string m_Bedroom;
};

class GoodGay
{
private:
    /* data */
    Building *building;

public:
    void visit()
    {
        cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;

        // 友元实现 访问私有属性
        cout << "好基友全局函数 正在访问：" << building->m_Bedroom << endl;
    }
    GoodGay(/* args */);
    ~GoodGay();
};

GoodGay::GoodGay(/* args */)
{
    building = new Building();
}

GoodGay::~GoodGay()
{
}

// 全局函数
void GoodGayfun(Building *building)
{
    cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;

    // 友元实现 访问私有属性
    cout << "好基友全局函数 正在访问：" << building->m_Bedroom << endl;
}

void test()
{
    Building building;
    GoodGayfun(&building);
}

void test1()
{
    GoodGay g;
    g.visit();
}

int main(int argc, char const *argv[])
{
    // test();

    test1();

    return 0;
}
