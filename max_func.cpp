#include <iostream>
using namespace std;

int main() {
    int max_number;
    max_number = max(2, 3);
    cout << max_number << endl;

    return 0;
}

int max(int num1, int num2) {
    int result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;
}