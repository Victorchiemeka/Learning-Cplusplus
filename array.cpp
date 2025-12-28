#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {4, 10, 2, 8, 5};
    int max{};
    max = numbers[0];
    for (int num : numbers) // For numbers in numbers
    {
        if (num > max)
        {
            max = num;
        }
    }
    cout << "The Largest number is " << max << endl;

    return 0;
}