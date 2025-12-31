#include <iostream>
using namespace std;

//  using pointer to print values in an array
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[size(arr) - 1];

    for (int i = 0; i < size(arr); i++)
    {
        cout << *ptr-- << endl;
    }
}