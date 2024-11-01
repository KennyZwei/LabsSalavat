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

int main()
{
    setlocale(LC_ALL, "");
    int N;
    do {
        cout << "enter N. N >= 10. N > 0" << endl;
        N = getIntFromUser("N: ");
    } while (N > 10 || N <= 0);

    if (N == 1) {
        cout << "Я проучился " << N << " семестр" << endl;
    }
    else if (N < 5) {
        cout << "Я проучился " << N << " семестра" << endl;
    }
    else {
        cout << "Я проучился " << N << " семестров" << endl;
    }

    return 0;
}
