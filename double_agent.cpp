#include <iostream>
using namespace std;

int main()
{
    int x{50};
    int *p1{&x};
    int *p2{&x};

    // This adds 10 directly to the value at the address
    *p1 += 10;

    // Print using the second pointer to prove they share the memory
    cout << *p2 << endl;
}