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

float calculateφ(float θ, int n, int m)
{
    return log(θ) / log((float)m / (float)n);
}

int main()
{
    int n, m;
    float φ, w;
    float θ = getFloatFromUser("o: ");
    do {
        cout << "enter n and m. m > n. n != 0. n and m mustn`t be negative" << endl;
        n = getIntFromUser("n: ");
        m = getIntFromUser("m: ");
    } while (m <= n || n == 0 || ((m > 0 && n < 0) || (m < 0 && n > 0)));

    if (θ > 1) {
        w = pow(log(calculateφ(θ, n, m)) / log(2), (float)m / (float)n);
    }
    else {
        w = pow(calculateφ(θ * θ, n, m), (float)n / (float)m);
    }
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;
    cout << "o = " << θ << endl;
    cout << "w = " << w << endl;
    return 0;
}
