#include <iostream>
using namespace std;

int main()
{
    int PRN = 202501100188;
    int seed = 188;
    int m = 23;

    int hashTable[23];

    for (int i = 0; i < m; i++)
        hashTable[i] = -1;

    cout << "Hash Table Project Initialized";

    return 0;
}
