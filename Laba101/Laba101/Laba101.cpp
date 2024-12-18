#include <iostream>
using namespace std;

int main()
{
    const int size = 26; // кол-во букв.
    int number = 97; // код первой буквы.
    char letter;

    for (int i = 0; i < size; i++) {
        letter = (char)number;
        cout << letter << endl;
        number++;
    }

    return 0;
}