#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    double w;

    for (int i = 0; i < n; i++) {
        cin >> w;

        double area = w * w;

        area = round(area * 10) / 10.0;

        cout << fixed << setprecision(1) << area << endl;
    }

    return 0;
}