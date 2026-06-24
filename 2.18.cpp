#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int days = n / 86400;
    n = n % 86400;

    int hours = n / 3600;
    n = n % 3600;

    int minutes = n / 60;
    int seconds = n % 60;

    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}
