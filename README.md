# Exp-12 Constructors and Destructors

## Aim:
To explore different types of constructors, default arguments, and destructors in C++ by implementing various programs that demonstrate their use. The goal is to understand how constructors and destructors manage object initialization and cleanup, and how default arguments simplify function calls.

## Software Used:
- Dev c++
  
## Theory:
In C++, constructors are special member functions that are automatically called when an object of a class is created. They initialize the object with default or user-provided values. There are different types of constructors:

1. Default Constructor: A constructor that takes no parameters and initializes an object with default values.
2. Parameterized Constructor: A constructor that takes arguments to initialize an object with specific values.
3. Copy Constructor: A constructor that creates a new object as a copy of an existing object.

Default Arguments allow functions or constructors to be called with fewer arguments than specified, using default values for the missing arguments.

Destructors are special member functions that are called when an object is destroyed, used to perform cleanup operations.

## Program 1: Default Constructor
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default constructor called!" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}
```
<strong> Output: </strong>
<br>


## Program 2: Parameterized Constructor
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>


## Program 3: Copy Constructor
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>


## Program 4: Default Arguments
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>


## Program 5: Area Calculation of Rectangle
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>


## Program 6: Destructor
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>


## Conclusion:
Through these, we learned about different types of constructors, including default, parameterized, and copy constructors, and how they initialize objects. We also explored default arguments, which provide flexibility in object creation, and destructors, which handle cleanup operations. These concepts are fundamental in C++ for managing object lifecycles and ensuring efficient memory and resource management.
