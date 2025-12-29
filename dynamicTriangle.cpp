#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;

    // A vector containing vectors of integers
    vector<vector<int>> triangle;

    // TODO: Build the triangle
    for (int i = 0; i < n; i++)
    {
        vector<vector<int>> added_column(i + 1, vector<int>(1));
        for (int j = 0; j < i - 1; j++)
        {
            added_column[i][j] = added_column[i - 1] + added_column[i]
        }
    }

    // Hint: triangle.push_back(...) adds a new empty row

    // TODO: Print the triangle

    return 0;
}