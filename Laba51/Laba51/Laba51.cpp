#include <iostream>
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
    float number, S = 0;

    do {
        number = getFloatFromUser("number: ");
        S += number;
    } while (number != 0);

    cout << "Sum = " << S << endl;
    return 0;
}
