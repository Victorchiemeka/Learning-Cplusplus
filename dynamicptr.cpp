#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "Solution 1 " << endl;
    /*
        int *p_number1{new int{35}};
        int *p_number2{new int{56}};

        if (p_number1 != nullptr)
        {
            cout << "p_number6" << *p_number1 << endl;
        }
        else
        {
            cout << "Invalid address" << endl;
        }
    */
    int *myptr{new int{10}};
    // cout << "Printing value in dereferenced pointer" << myptr << *myptr << endl;

    delete myptr;
    myptr = nullptr; // Reset the pointer to null

    if (myptr != nullptr)
    {
        cout << "myptr: " << *myptr << endl;
    }
}