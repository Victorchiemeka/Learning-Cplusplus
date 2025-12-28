#include <iostream>
using namespace std;

int main()
{
    int input{};

    cout << "Enter a number 1 to n: " << endl;
    cin >> input;

    // Standard int is safer here since input is signed
    for (int i = 1; i <= input; i++)
    {
        // 1. Check the "BOTH" case first!
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "ZipZap" << endl;
        }
        // 2. Then check the individual cases
        else if (i % 3 == 0)
        {
            cout << "Zip" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Zap" << endl;
        }
        // 3. Finally, print the number
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}