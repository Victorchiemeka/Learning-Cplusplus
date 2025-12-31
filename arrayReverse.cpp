#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *start = &arr[0];
    int *end = &arr[4];

    int temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for (auto i : arr)
    {
        cout << i << endl;
    }
}