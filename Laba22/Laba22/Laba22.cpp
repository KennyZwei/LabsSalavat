#include <iostream>
#include <string>
using namespace std;

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
    float a1, a2, a3;
    a1 = getFloatFromUser("a1: ");
    a2 = getFloatFromUser("a2: ");
    a3 = getFloatFromUser("a3: ");

    if (a1 < a2) {
        if (a1 < a3) {
            a1 = 0;
        }
        else{
            a3 = 0;
        }
    }
    else {
        if (a2 < a3) {
            a2 = 0;
        }
        else{
            a3 = 0;
        }
    }

    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl;
    return 0;
}
