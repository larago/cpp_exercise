#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 20;
    int c;

    if (a && b) {
        cout << "line 1 - true" << endl;
    }

    if (a || b) {
        cout << "line 2 - true" << endl;
    }

    a = 0;
    b = 10;
    if (a && b) {
        cout << "line 3 - true" << endl;
    }

    if (!(a && b)) {
        cout << "line 4 - true" << endl;
    }

    return 0;
}