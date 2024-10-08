// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(int val) {
        cout << "Parameterized constructor called! Value: " << val << endl;
    }
};

int main() {
    MyClass obj(42);
    return 0;
}
