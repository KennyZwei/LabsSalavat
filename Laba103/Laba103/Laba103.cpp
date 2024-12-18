#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int rowCount = 4;

    for (int i = 0; i < rowCount; i++) {
        cout << setw(rowCount - i);
        for (int j = 0; j < i * 2 + 1; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}