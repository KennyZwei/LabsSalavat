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

    int N = getIntFromUser("N: ");
    float* A = new float[N];
    
    
    for (int i = 0; i < N; i++) {
        A[i] = getFloatFromUser("A[" + to_string(i) + "]: ");
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        A[i] = A[i] + i;
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }
    cout << endl;
    return 0;
}
