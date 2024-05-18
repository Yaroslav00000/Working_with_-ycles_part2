#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int a; 

    cout << "Введіть ціле число: ";
    cin >> a;

    int sum = 0;
    int temp = a;
	for (int i = 0; i < 3; i++) {
		sum += temp % 10;
		temp /= 10;
	}

    int kubsum = sum * sum * sum;
    if (kubsum == a * a) {
        cout << a << " - число, для якого куб суми цифр дорівнює A * A." << endl;
    }
    else {
        cout << a << " - число, для якого куб суми цифр не дорівнює A * A." << endl;
    }

    return 0;
}
