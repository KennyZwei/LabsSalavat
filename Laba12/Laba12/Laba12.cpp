#include <iostream>
using namespace std;

int getPositiveIntFromUser(string title)
{
    char* end;
    string input;
    cout << title;
    cin >> input;
    int value = strtol(input.c_str(), &end, 10);
    while (*end || value < 1)
    {
        cout << "Invalid input. Please enter an integer and more than 0: ";
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

float calculateLastValue(float d, int n, float a1)
{
    return a1 + (n - 1) * d;
}

float calculateProgressionSum(float d, int n, float a1)
{
    return ((2 * a1 + d * (n - 1)) * n) / 2;
}

int main()
{
    float d, a1, sum, lastValue;
    int n;
    d = getFloatFromUser("d: ");
    n = getPositiveIntFromUser("n: ");
    a1 = getFloatFromUser("a1: ");
    lastValue = calculateLastValue(d, n, a1);
    sum = calculateProgressionSum(d, n, a1);
    cout << "d = " << d << endl;
    cout << "n = " << n << endl;
    cout << "a1 = " << a1 << endl;
    cout << "lastValue = " << lastValue << endl;
    cout << "sum = " << sum << endl;
    return 0;
}