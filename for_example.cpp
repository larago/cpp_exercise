#include <iostream>
using namespace std;

int main() {
    int index = 0;
    for (; ;) {
        if (index > 1) {
            break;
        }
        cout << "this loop will run twice.\n" << endl;
        index++;
    }
}