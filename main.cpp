#include <iostream>
using namespace std;

int main()
{
    int seed = 188;
    int m = 23;
    int data[20];
    int hashTable[23];

    for (int i = 0; i < m; i++)
        hashTable[i] = -1;

    for (int i = 0; i < 20; i++)
        data[i] = (seed + 13 * i) % 100;

    for (int i = 0; i < 20; i++)
    {
        int index = data[i] % m;
        hashTable[index] = data[i];
    }

    cout << "Basic Hash Table:\n";

    for (int i = 0; i < m; i++)
        cout << i << " : " << hashTable[i] << endl;

    return 0;
}
