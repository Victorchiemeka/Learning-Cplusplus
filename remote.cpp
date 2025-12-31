#include <iostream>
using namespace std;

int main()
{
    int num{10};
    int *ptr = &num; // pointer holding the reference address
    *ptr = 20;       // dereferencing the pointer to change the value in variable num it is pointing to

    cout << num << endl;
}