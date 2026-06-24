#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;

    int total;

    if (p >= 100) {
        total = p * 100 * 0.7;
    }
    else if (p >= 30) {
        total = p * 100 * 0.8;
    }
    else if (p >= 10) {
        total = p * 100 * 0.9;
    }
    else {
        total = p * 100;
    }

    cout << total << endl;

    return 0;
}
