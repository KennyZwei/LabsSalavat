#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float getRadByDeg(float deg) {
    return (deg * M_PI) / 180;
}

float rand_float(float M, float N)
{
    return M + (N - M) * rand() / RAND_MAX;
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
    srand(time(0));
    float const a = 0.702;
    float sqrtX, cosSqrtX, divisor, sqrtDivisor, xMinusA, logXMinusA;
    while (true)
    {
        float M, N;
        cout << "\n Input the limit values for the deg. \n" << endl;
        M = getFloatFromUser("M :");
        N = getFloatFromUser("N :");
        while (M > N) {
            cout << "Error. M must be less or equal N \n" << endl;
            M = getFloatFromUser("M :");
            N = getFloatFromUser("N :");
        }
        float x = rand_float(M, N);
        float radX = getRadByDeg(x);
        cout << "x in deg = " << x << endl;
        cout << "x in radian = " << radX << endl;

        cout << "sqrt(x) = ";
        if (radX < 0) {
            cout << "Error: x can`t be negative" << endl;
            continue;
        }
        sqrtX = sqrt(radX);
        cout << sqrtX << endl;

        cosSqrtX = pow(cos(sqrtX), 2);
        cout << "cos(sqrt(x)) ^ 2 = " << cosSqrtX << endl;

        divisor = a * cos(pow(radX, 3)) - cosSqrtX;
        cout << "a * cos(x^3) - cos(sqrt(x)) ^ 2 = " << divisor << endl;

        cout << "sqrt(a * cos(x^3) - cos(sqrt(x)) ^ 2) = ";
        if (divisor < 0) {
            cout << "Error: divisor can`t be negative" << endl;
            continue;
        }
        sqrtDivisor = sqrt(divisor);
        cout << sqrtDivisor << endl;

        xMinusA = radX - a;
        cout << "x - a = " << xMinusA << endl;

        cout << "log3/5(x - a) = ";
        if (xMinusA < 0) {
            cout << "Error: (x - a) can`t be negative" << endl;
            continue;
        }
        logXMinusA = log(xMinusA) / log(3. / 5.);

        cout << "sqrt(a * cos(x^3) - cos(sqrt(x)) ^ 2) / log3/5(x - a) = ";
        if (logXMinusA == 0) {
            cout << "Error: log3/5(x - a)  can`t be 0" << endl;
            continue;
        }
        cout << sqrtDivisor / logXMinusA << endl;
        break;
    }

    return 0;
}
