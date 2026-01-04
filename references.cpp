#include <iostream>
using namespace std;

int main()
{
    int main_num{45};

    int &alias_num{main_num};

    cout << &alias_num << endl;
}