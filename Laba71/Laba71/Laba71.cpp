#include <iostream>
using namespace std;

int AddLeftDigit(int D, int K)
{
    int digitsNumber = 0;
    int tempValue = K;
    do {
        digitsNumber++;
        tempValue /= 10;
    } while (tempValue != 0);

    return K + D * pow(10, digitsNumber);
}

void init_arr(int la[], int DIM)
{
    for (int i = 0; i < DIM; i++)
    {
        la[i] = ((((long)i << 4) << 16) + i * 3);
        cout << "la[" << i << "] = " << la[i] << endl;
    }
}

void bits(int la[], int DIM)
{
    int j, bitCount, i;
    for (i = 0; i < DIM; i++)
    {
        bitCount = 0;
        for (j = 0; j < 8 * sizeof(int); j++) {
            if ((la[i] & (1L << j)) != 0) {
                bitCount++;
            }
        }
        cout << "la[" << i << "] count bits setted to 1 = " << bitCount << endl;
    }
}

int main()
{
    const int DIM = 25;
    int a[DIM];
    init_arr(a, DIM);
    bits(a, DIM);
    return 0;
}
