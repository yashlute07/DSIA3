#include <iostream>
using namespace std;

int main()
{
    int PRN = 202501100188;
    int seed = 188;
    int m = 23;

    int data[20];
    int hashTable[23];
    int collisions = 0;

    for (int i = 0; i < m; i++)
        hashTable[i] = -1;

    for (int i = 0; i < 20; i++)
        data[i] = (seed + 13 * i) % 100;

    cout << "PRN: " << PRN << endl;
    cout << "Scenario: Mango Varieties\n";
    cout << "Hash Method: Division\n";
    cout << "Collision Handling: Linear Probing\n";

    cout << "\nGenerated Dataset:\n";

    for (int i = 0; i < 20; i++)
        cout << data[i] << " ";

    cout << "\n\nInsertion Details:\n";

    for (int i = 0; i < 20; i++)
    {
        int index = data[i] % m;
        int original = index;

        while (hashTable[index] != -1)
        {
            collisions++;
            index = (index + 1) % m;
        }

        hashTable[index] = data[i];

        cout << "Key " << data[i]
             << " | Hash Index " << original
             << " | Inserted at " << index << endl;
    }

    cout << "\nFinal Hash Table:\n";

    for (int i = 0; i < m; i++)
        cout << i << " : " << hashTable[i] << endl;

    cout << "\nTotal Collisions: " << collisions << endl;

    return 0;
}
