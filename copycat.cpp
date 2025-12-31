#include <iostream>
using namespace std;

int main()
{
    int source[] = {1, 2, 3};
    int dest[3];

    int *pSrc = &source[0];
    int *pDest = &dest[0];

    for (int i = 0; i < 3; i++)
    {
        *pDest++ = *pSrc++;
        }

    for (int i = 0; i < 3; i++)
    {
        cout << dest[i] << endl;
    }
}