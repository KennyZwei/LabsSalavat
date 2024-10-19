#include <iostream>
using namespace std;

float getFloatFromUser(string title)
{
    float value;
    cout << title;
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter an float: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
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

}