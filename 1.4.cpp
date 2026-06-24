#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;

    if (word == "dog") {
        cout << "狗" << endl;
    }
    else if (word == "cat") {
        cout << "貓" << endl;
    }
    else if (word == "duck") {
        cout << "鴨" << endl;
    }
    else if (word == "cow") {
        cout << "牛" << endl;
    }
    else if (word == "fox") {
        cout << "狐" << endl;
    }
    else if (word == "狗") {
        cout << "dog" << endl;
    }
    else if (word == "貓") {
        cout << "cat" << endl;
    }
    else if (word == "鴨") {
        cout << "duck" << endl;
    }
    else if (word == "牛") {
        cout << "cow" << endl;
    }
    else if (word == "狐") {
        cout << "fox" << endl;
    }

    return 0;
}