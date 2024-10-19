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

float calculateY(float t, float z)
{
    return 2 / tan(z) + t;
}

float calculateX(float t, float z, float y)
{
    return (3 * y * y) / (4*tan(z) - 2*t*t);
}

int main()
{
    float t, z, y, x;
    t = getFloatFromUser("t: ");
    z = getFloatFromUser("z: ");
    y = calculateY(t, z);
    x = calculateX(t, z, y);
    cout << "t = " << t << endl;
    cout << "z = " << z << endl;
    cout << "y = " << y << endl;
    cout << "x = " << x << endl;
    return 0;
}