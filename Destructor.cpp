// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

class MyClass {
public:
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }

    MyClass() {
        cout << "Constructor called!" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}
