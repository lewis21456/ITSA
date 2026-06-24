#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    double height = h / 100.0;
    double bmi = w / (height * height);

    cout << fixed << setprecision(2) << bmi << endl;

    return 0;
}