#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int second, hours, minutes, seconds;

    cout << "Enter seconds: ";
    cin >> second;

    hours = second / 3600;
    minutes = (second % 3600) / 60;
    seconds = second % 60;

    cout << "Result: " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    system("pause");
    return 0;
}
