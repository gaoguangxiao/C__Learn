#include <iostream>

int main()
{

    int arr[12];

    int arr1[9] = {,24,67,88,1, 23, 34, 455, 56};

    int length = 5;

    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr1[length - i - 1];
        arr1[length - i - 1] = temp;
        /* code */
    }

    for (int i = 0; i < length; i++)
    {
        std::cout << arr1[i] << std::endl;
    }

    // std::cout << sizeof(arr1);
    return 0;
}