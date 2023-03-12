#include <iostream>

using namespace std;
int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;

    std::cout << *p << std::endl;

    std::cout << sizeof(arr);

    std::cout << p[1];
    return 0;
}