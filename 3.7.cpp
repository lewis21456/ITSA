#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;

    int maxNum = x;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x > maxNum) {
            maxNum = x;
        }
    }

    cout << maxNum << endl;

    return 0;
}
