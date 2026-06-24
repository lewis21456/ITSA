#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    cout << x << "-" << y << "=" << x - y << endl;

    int r = x % y;
    if (r < 0) {
        r += abs(y);
    }

    int q = (x - r) / y;

    cout << x << "/" << y << "=" << q << "..." << r << endl;

    return 0;
}