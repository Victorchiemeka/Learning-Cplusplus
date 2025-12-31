#include <iostream>
using namespace std;

int main()
{
    int *ptr{nullptr};
    // Check for null to prevent crash
    if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "Safe safe" << endl;
    }
    return 0;
}