#include <iostream>
#include <chrono> 
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int number;
    int r = rand() % 500 + 1;
    int attempt = 0;
    auto start_time = chrono::high_resolution_clock::now();
    cout << r << endl;
    for (;;)
    {
        cout << "Guess number: ";
        cin >> number;
        attempt++;
        if (number < r && number != 0) {
            cout << "The number you guess is less than this" << endl;
        }
        else if (number > r && number != 0) {
            cout << "The number you guess is greater than this" << endl;
        }
        else if (number == 0) {
            cout << "Game Over";
            break;
        }
        else
        {
            auto end_time = chrono::high_resolution_clock::now();
            auto duration = chrono::duration_cast<chrono::seconds>(end_time - start_time);
            cout << "Congratulations! You Guessed the Number " << r << " for " << attempt << " attempt" << " and for " << duration.count() << " seconds." << endl;
            break;
        }
    }
    cout << endl;
    return 0;
}