#include <iostream>
using namespace std;

int main()
{
    /*
    int number{4};
    int *p_number{&number}; // can only store an address of an variable of int type

    cout << number << ' ' << *p_number << endl;
    */

    // Character pointer behaviour

    const char *message{"Hello world!"};

    cout << *message << endl;
    return 0;
}