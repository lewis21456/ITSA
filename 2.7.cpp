#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maxNum = a;

    if (b > maxNum) {
        maxNum = b;
    }

    if (c > maxNum) {
        maxNum = c;
    }

    cout << maxNum << endl;

    return 0;
}