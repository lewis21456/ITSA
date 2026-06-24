    #include <iostream>
    using namespace std;

    int main() {
        string n;
        cin >> n;

        for (int i = 0; i < 5; i++) {
            int num = n[i] - '0';

            for (int j = 0; j < num; j++) {
                cout << "*";
            }

            cout << endl;
        }

        return 0;
    }