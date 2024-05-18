#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int a;
    cout << "¬вед≥ть ц≥ле число A: ";
    cin >> a;

    for (int b = 1; b <= a; b++) {
        if (a % (b * b) == 0 && a % (b * b * b) != 0) {
            cout << b << " ";
        }
    }

    cout << endl;
    return 0;
}
