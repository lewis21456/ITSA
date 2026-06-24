#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minute;
    cin >> minute;

    double fee = minute * 0.9;

    if (minute <= 800) {
        fee = fee;
    }
    else if (minute < 1500) {
        fee = fee * 0.9;
    }
    else {
        fee = fee * 0.79;
    }

    cout << fixed << setprecision(1) << fee << endl;

    return 0;
}