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
    setlocale(LC_ALL, "");
    int timeInHours = getIntFromUser("enter time in hours (0-24): ");
    while (timeInHours < 0 || timeInHours > 24)
    {
        timeInHours = getIntFromUser("out of range. enter time in hours (0-24): ");
    }

    if (timeInHours >= 4 && timeInHours < 12) {
        cout << "Доброе утро!" << endl;
    }
    else if (timeInHours >= 12 && timeInHours <= 18) {
        cout << "Добрый день!" << endl;
    }
    else {
        cout << "Доброй ночи!" << endl;
    }

    return 0;
}
