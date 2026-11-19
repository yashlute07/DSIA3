#include <iostream>
using namespace std;

int main()
{
    int PRN = 202501100188;
    int seed = 188;
    int data[20];

    for (int i = 0; i < 20; i++)
        data[i] = (seed + 13 * i) % 100;

    cout << "Generated Dataset:\n";

    for (int i = 0; i < 20; i++)
        cout << data[i] << " ";

    return 0;
}
