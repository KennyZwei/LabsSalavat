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
    float a, b, S = 0;
    int N = getIntFromUser("N: ");
    float* aArray = new float[N];
    float* bArray = new float[N];

    for (int i = 1; i <= N; i += 2) {
        aArray[i - 1] = i;
        bArray[i - 1] = i * i;
    }

    for (int i = 2; i <= N; i += 2) {
        aArray[i - 1] = i / 2;
        bArray[i - 1] = i * i * i;
    }

    for (int i = 0; i < N; i++) {
        S += pow(aArray[i] - bArray[i], 2);
        cout << "a" << (i + 1) << " = " << aArray[i] << endl;
        cout << "b" << (i + 1) << " = " << bArray[i] << endl;
    }

    cout << "Sum = " << S << endl;
    return 0;
}
