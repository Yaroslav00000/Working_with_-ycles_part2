#include <iostream>
using namespace std;

int main() {
    double usd_to_uah = 39.5;
    double eur_to_uah = 42.4;
    double UAN, converted_usd, converted_eur;
    int choice;
    string text;

    for (;;) {
        cout << "Enter the amount in UAH: ";
        cin >> UAN;

        cout << "Choose the currency to convert:" << endl;
        cout << "1. USD" << endl;
        cout << "2. EUR" << endl;
        cin >> choice;

        if (choice == 1) {
            converted_usd = UAN / usd_to_uah;
            cout << "Amount of UAH in dollars: " << converted_usd << " USD" << endl;
        }
        else if (choice == 2) {
            converted_eur = UAN / eur_to_uah;
            cout << "Amount of UAH in euros: " << converted_eur << " EUR" << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
            continue;
        }

        cout << "Do you want to convert to another currency? (Yes/No): ";
        cin >> text;
        if (text != "Yes" && text != "yes") {
            cout << "Conversion is over. Have a great day!" << endl;
            break;
        }

        cout << "Choose the currency to convert to:" << endl;
        cout << "1. UAH" << endl;
        cout << "2. USD" << endl;
        cout << "3. EUR" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Amount of UAH: " << UAN << endl;
        }
        else if (choice == 2) {
            cout << "Amount of USD: " << converted_usd << endl;
        }
        else if (choice == 3) {
            cout << "Amount of EUR: " << converted_eur << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
