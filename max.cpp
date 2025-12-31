#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 5, 8, 99, 2};
    int *ptr = &arr[0];

    int maxVal{*ptr};

    for (int i = 0; i < size(arr); i++)
    {
        if (*ptr > maxVal)
        {
            maxVal = *ptr;
        }
        ptr++;
    }
    cout << "The largest value in the array is " << maxVal << endl;
}