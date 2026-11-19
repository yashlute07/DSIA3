#include <iostream>
using namespace std;

int main()
{
    int seed = 188;
    int m = 23;
    int data[20];

    for (int i = 0; i < 20; i++)
        data[i] = (seed + 13 * i) % 100;

    cout << "Hash Indexes:\n";

    for (int i = 0; i < 20; i++)
    {
        int index = data[i] % m;
        cout << data[i] << " -> " << index << endl;
    }

    return 0;
}
