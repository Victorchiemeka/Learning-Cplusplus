#include <iostream>

using namespace std;

int main()
{
    // int *prt = new int{20};

    // prt = new int{33}; // with this intialization you just lost
    //  the memory in the previous initialization and it is stucked to the stack because you dont have access to it anymore and you cannot delete it
    size_t size{10};

    double *salaries{new double[size]};
    int *student{new int[size]{1, 2, 3}};
}