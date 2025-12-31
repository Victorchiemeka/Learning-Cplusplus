#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *start = &arr[0];
    int *end = &arr[size(arr) - 1];
    int dist = end - start;
    cout << dist << endl;
}