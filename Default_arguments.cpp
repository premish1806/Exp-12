// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

class MyClass {
private:
    int value1;
    int value2;
public:
    MyClass(int val1 = 0, int val2 = 0) {
        value1 = val1;
        value2 = val2;
        cout << "Constructor called! Values: " << value1 << ", " << value2 << endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(5);
    MyClass obj3(3, 7);
    return 0;
}
