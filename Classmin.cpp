#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle() : length(0), width(0) {}
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }
    double getArea() const {
        return length * width;
    }
    double getPerimeter() const {
        return 2 * (length + width);
    }
    void display() const {
        cout << "Length: " << length << "\nWidth: " << width 
             << "\nArea: " << getArea() 
             << "\nPerimeter: " << getPerimeter() << endl;
    }
};
int main() {
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);
    rect.display();
    return 0;
}
