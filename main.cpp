#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int number;

    cout << "������ ���� �����: ";
    cin >> number;

    cout << "ĳ������ ����� " << number << ": ";
    for (int dilnuk = 1; dilnuk <= number; dilnuk++) {
        if (number % dilnuk == 0) {
            int pardilnik = number / dilnuk;
            if (pardilnik != dilnuk) {
                cout << pardilnik << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
