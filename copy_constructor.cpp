// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
public:
    MyClass(int val) {
        value = val;
        cout << "Parameterized constructor called! Value: " << value << endl;
    }

    MyClass(const MyClass &obj) {
        value = obj.value;
        cout << "Copy constructor called! Value: " << value << endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    return 0;
}
