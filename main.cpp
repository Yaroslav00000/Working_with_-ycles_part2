#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int count = 0;

    for (int num = 100; num <= 999; ++num) {
        int cotni = num / 100;
        int decyti = (num / 10) % 10;
        int odinutsi = num % 10;

        if (cotni == decyti || cotni == odinutsi || decyti == odinutsi) {
            ++count;
        }
    }

    cout << "Result: " << count << endl;
    system("pause");
    return 0;
}
