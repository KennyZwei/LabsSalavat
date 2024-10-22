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

float calculateArithmeticAverage(float firstNumber, float secondNumber) 
{
    return (firstNumber + secondNumber) / 2;
}

float calculateGeometricAverage(float firstNumber, float secondNumber)
{
    return sqrt(firstNumber * secondNumber);
}

int main()
{
    float firstNumber, secondNumber, arithmeticAverage, geometricAverage;
    firstNumber = getFloatFromUser("first number: ");
    secondNumber = getFloatFromUser("second number: ");
    arithmeticAverage = calculateArithmeticAverage(firstNumber, secondNumber);
    geometricAverage = calculateGeometricAverage(firstNumber, secondNumber);
    cout << "first number = " << firstNumber << endl;
    cout << "second number = " << secondNumber << endl;
    cout << "arithmetic average = " << arithmeticAverage << endl;
    cout << "geometric average = " << geometricAverage << endl;
    return 0;
}
