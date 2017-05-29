#include <iostream>
#include <ctime>
#include <typeinfo>

using namespace std;

int main() {
    int* aa;
    int bb = 12;
    aa = &bb;
    cout << *aa << endl;
    time_t now = time(0);

    char* dt = ctime(&now); 
    cout << (ctime(&now) == dt) << endl;

    cout << "Local date and time: " << dt << endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC date and time: " << dt << endl;

    return 0;
}