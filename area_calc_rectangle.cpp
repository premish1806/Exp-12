// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void getInput() { 
        cout << "Enter length and breadth: " << endl;
        cin >> length >> breadth;
    }

    void display() { 
        int area = length * breadth;
        cout << "Area of rectangle is: " << area << endl;
    }
};

int main() {
    Rectangle rect;
    rect.getInput();
    rect.display();
    return 0;
}
