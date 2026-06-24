#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i;

    for (int k = 0; k < n; k++) {
        cin >> i;

        if (i > 31) {
            cout << "Value of more than 31" << endl;
        } else {
            cout << (1LL << i) << endl;
        }
    }

    return 0;
}