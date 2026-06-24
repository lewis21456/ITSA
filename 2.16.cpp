#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1;
    cin >> h2 >> m2;

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;
    int total = end - start;

    int fee = 0;

    if (total <= 120) {
        fee = (total / 30) * 30;
    }
    else if (120 < total && total <= 240) {
        fee = (total/ 30) * 40;
    }
    else {
        fee =(total / 30) * 60;
    }

    cout << fee << endl;

    return 0;
}