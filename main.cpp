#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    int rezult = 0;
    int pozition = 1;

    for (; number != 0; number /= 10) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            rezult += digit * pozition;
            pozition *= 10;
        }
    }

    cout << "Rezult: " << rezult << endl;

    system("pause");
    return 0;
}
