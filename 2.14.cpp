#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m;
    cin >> m;

    double time = (m * 100) / 23.8;

    cout << (int)ceil(time) << endl;

    return 0;
}