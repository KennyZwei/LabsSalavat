#include <iostream>
using namespace std;
const double EULER_CONSTANT = exp(1.0);

float getFloatFromUser(string title)
{
    char* end;
    string input;
    cout << title;
    cin >> input;
    float value = strtof(input.c_str(), &end);
    while (*end || value <= 0)
    {
        cout << "Invalid input. Please enter an float and number > 0: ";
        cin >> input;
        value = strtof(input.c_str(), &end);
    }
    return value;
}

float calculateY(float x)
{
    return pow(abs(pow(x, 7)), 1 / 5) + 0.35 / pow(10, 17) + 1/tan(x) + pow(log(x) / log(EULER_CONSTANT), 2);
}

int main()
{
    float x, y;
    x = getFloatFromUser("x: ");
    y = calculateY(x);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}
