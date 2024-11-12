#include <iostream>
using namespace std;

int getIntFromUser(string title)
{
    char* end;
    string input;
    cout << title;
    cin >> input;
    int value = strtol(input.c_str(), &end, 10);
    while (*end)
    {
        cout << "Invalid input. Please enter an int: ";
        cin >> input;
        value = strtol(input.c_str(), &end, 10);
    }
    return value;
}

float getFloatFromUser(string title)
{
    char* end;
    string input;
    cout << title;
    cin >> input;
    float value = strtof(input.c_str(), &end);
    while (*end)
    {
        cout << "Invalid input. Please enter an float: ";
        cin >> input;
        value = strtof(input.c_str(), &end);
    }
    return value;
}

int main()
{
    float x, U = 1, S = 0, degreeCos = 1;
    long long fact = 1;
    int N, i;
    N = getIntFromUser("N: ");
    x = getFloatFromUser("x: ");
    float dCos = cos(x) - cos(2 * x);
    degreeCos = cos(x);

    for (i = 1; i <= N && i < 4; i++) {
        fact *= i;
        cout << "fact = " << fact << endl;
        U = pow(cos(i * x), i) / fact;
        S += U;
        cout << "a" << i << " = " << U << endl;
    }

    for (; i <= N; i++) {
        fact *= i;
        cout << "fact = " << fact << endl;
        U = pow(cos(i * x), i) / fact;
        S += U;
    }

    cout << "Sum = " << S << endl;
    return 0;
}
