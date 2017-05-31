#include <iostream>

using namespace std;

// Basic class
class Shape {
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
    protected:
        int width;
        int height;
};

// Derived class
class Rectangle: public Shape {
    public: 
        int getArea() {
            return width * height;
        }
};

int main(void) {
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);

    cout << "Total area: " << Rect.getArea() << endl;

    return 0;
}