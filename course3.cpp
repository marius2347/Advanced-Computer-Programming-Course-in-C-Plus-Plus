// Pointers
#include <iostream>
using namespace std;

int main() {

    int a = 3;
    int *adr = &a; // pointer variable adr holds the address of variable a
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of adr (address of a): " << adr << endl;

    (*adr)++; // incrementing the value at the address held by adr
    cout << "Value at address held by adr after increment: " << *adr << endl;
    cout << "Value of a after incrementing via pointer: " << a << endl;

    struct S{
        int x;
        float y;
    };

    S X;
    X.x = 5;
    X.y = 3.14;
    cout << "Value of X.x: " << X.x << endl;
    cout << "Value of X.y: " << X.y << endl;
    S *adrX = &X; // pointer to structure S
    cout << (*adrX).x << endl; // accessing member x using dereferenced pointer
    cout << adrX->y << endl; // accessing member y using arrow operator

    int x = 10; 
    // a refference variable
    int &ref = x;
    cout << ref << endl; // y is a refference to x (in depth its an alias pointer)
    
    return 0;
}