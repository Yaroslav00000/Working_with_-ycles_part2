#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int num,digit;
    cout << "Enter number: ";
    cin >> num;

    int rezult = 0;
    int pozition = 1;

    for (; num != 0; num /= 10) {
        digit = num % 10;
        if (digit != 3 && digit != 6) {
            rezult += digit * pozition;
            pozition *= 10;
        }
    }

    cout << "Rezult: " << rezult << endl;

    system("pause");
    return 0;
}
