#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x >= 50 && x <= 70) {
            cout << x << endl;
        } else {
            cout << 100 << endl;
        }
    }

    return 0;
}
