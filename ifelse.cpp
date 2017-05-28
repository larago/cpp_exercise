#include <iostream>
using namespace std;

int main() {
    int a = 21;
    int b = 10;
    int c;

    if (a == b) {
        cout << "a is equivalent to b." << endl;
    }
    else {
        cout << "a is not equivalent to b." << endl;
    }

    if (a < b) {
        cout << "a is smaller than b." << endl;
    } else {
        cout << "a is not smaller than b." << endl;
    }

    if (a > b) {
        cout << "a is larger than b." << endl;
    } else {
        cout << "a is not larger than b." << endl;
    }

    a = 5;
    b = 20;
    if (a <= b) {
        cout << "a is smaller or equivalent to b." << endl;
    } else {
        cout << "a is larger than b." << endl;
    }

    if (a >= b) {
        cout << "a is larger or equivalent to b." << endl;
    } else {
        cout << "a is smaller than b." << endl;
    }

    return 0;
}