#include <iostream>

int main()
{
    int arr1[9] = {24, 67, 88, 1, 23, 34, 455, 56, 64};

    int length = 9;

    for (int j = 0; j < length - 1; j++)
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (arr1[i] > arr1[i + 1])
            {
                int temp = arr1[i];
                arr1[i] = arr1[i + 1];
                arr1[i + 1] = temp;
            }

            /* code */
        }
    }

    for (int i = 0; i < length - 1; i++)
    {
        std::cout << arr1[i] << std::endl;

        /* code */
    }
}