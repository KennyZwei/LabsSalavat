#include <iostream>
#include <string>
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
    int negativeCount = 0, positiveCount = 0, BIndex = 0, CIndex = 0;

    int N = getIntFromUser("N: ");
    float* A = new float[N];
    
    
    for (int i = 0; i < N; i++) {
        A[i] = getFloatFromUser("A[" + to_string(i) + "]: ");
        if (A[i] >= 0) {
            positiveCount++;
        }
        else {
            negativeCount++;
        }
    }
    cout << endl;

    float* B = new float[positiveCount];
    float* C = new float[negativeCount];
    for (int i = 0; i < N; i++) {
        if (A[i] >= 0) {
            B[BIndex] = A[i];
            BIndex++;
        }
        else {
            C[CIndex] = A[i];
            CIndex++;
        }
    }

    for (int i = 0; i < negativeCount; i++) {
        cout << "B[" << i << "] = " << B[i] << endl;
    }
    cout << endl;

    for (int i = 0; i < positiveCount; i++) {
        cout << "C[" << i << "] = " << C[i] << endl;
    }
    cout << endl;
    return 0;
}
