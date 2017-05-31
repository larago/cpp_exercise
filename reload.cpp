#include <iostream>
using namespace std;

class printData {
    public: 
        void print(int i) {
            cout << "Printing int: " << i << endl;
        }

        void print(double f) {
            cout << "Printing double: " << f << endl;
        }

        void print(char *c) {
            cout << "Printing char: " << c << endl;
        }
};

int main(void) {
    printData pd;

    pd.print(5);

    pd.print(500.345);

    pd.print("Hello C++");

    return 0;
}