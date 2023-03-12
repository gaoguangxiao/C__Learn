#include <iostream>

int main()
{

    int scores[3][3] = {{100, 100, 100},
                        {90, 50, 100},
                        {60, 70, 80}};

    int count = 3;

    for (size_t i = 0; i < count; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < count; j++)
        {
            sum += scores[i][j];
        }
        std::cout << "第" << i  + 1 <<"人的分数" << sum << std::endl;
    }

    return 0;
}