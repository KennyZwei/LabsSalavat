#include <iostream>
using namespace std;

int main(void)
{
    string input;
    char number;
    size_t len;
    do {
        cout << "Enter telephone number using letters: ";
        cin >> input;
        len = input.size();

        for (size_t i = 0; i < len; i++)
        {
            switch (input[i])
            {
            case 'A': case 'B': case 'C':
                number = '2';
                break;
            case 'D': case 'E': case 'F':
                number = '3';
                break;
            case 'G': case 'H': case 'I':
                number = '4';
                break;
            case 'J': case 'K': case 'L':
                number = '5';
                break;
            case 'M': case 'N': case 'O':
                number = '6';
                break;
            case 'P': case 'R': case 'S':
                number = '7';
                break;
            case 'T': case 'U': case 'V':
                number = '8';
                break;
            case 'W': case 'X': case 'Y':
                number = '9';
                break;
            case 'Q': case 'Z':
                break;
            }

            cout << number;
        }

        cout << endl;
    } while (input[len - 1] != 'Q' && input[len - 1] != 'Z');
    

    return 0;
}