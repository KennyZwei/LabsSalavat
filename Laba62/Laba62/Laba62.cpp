#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int rand_int(int M, int N)
{
    return rand() % (N - M + 1) + M;
}

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

int main()
{
    srand(time(0));
    int D;
    int numberCount = 2;
    int K = rand_int(0, 9);
    cout << "K = " << K << endl << endl;
    for (int i = 0; i < numberCount; i++) {
        D = rand_int(0, 9);
        cout << "D = " << D << endl;
        
        K = AddLeftDigit(D, K);
        cout << "K = " << K << endl << endl;
    }
    return 0;
}
