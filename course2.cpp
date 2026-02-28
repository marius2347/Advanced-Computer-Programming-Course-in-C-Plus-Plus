// static variables
#include <iostream>
using namespace std;

class T {
    public:
        static int v; // declaration of static variable
        static void f(); // static member function

};

int T::v = 1; // definition and initialization of static variable

void T::f() { // definition of static member function
    cout << "Static function called. v = " << v << endl;
}

int main() {

    cout << "Initial value of static variable v: " << T::v << endl;
    T::f(); // calling static member function

    T ob1;
    ob1.f(); // calling static member function using object

    T ob2;
    ob2.v = 5; // modifying static variable using object

    ob1.f(); // calling static member function to see updated value
    T::f(); // calling static member function again to see updated value

    T::v = 10; // modifying static variable using class name
    ob1.f(); // calling static member function to see updated value
    ob2.f(); // calling static member function to see updated value
    return 0;
}