#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int num1, num2;

    cout << "������ ����� ���� �����: ";
    cin >> num1;

    cout << "������ ����� ���� �����: ";
    cin >> num2;

    cout << "����� �������: ";


    int min = min(num1, num2);
    for (int dil = 1; dil <= min; dil++) {
        if (num1 % dil == 0 && num2 % dil == 0) {
            cout << dil << " ";
        }
    }
    cout << endl;
    return 0;
}
