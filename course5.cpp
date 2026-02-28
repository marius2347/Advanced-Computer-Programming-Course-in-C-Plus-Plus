#include <iostream>
using namespace std;

class C {
    public:
        virtual void display();
};

void C::display() {
    cout << "Class C display function called." << endl;
};

class C1: public C {
    public:
        void display();

};

void C1::display() {
    cout << "Class C1 display function called." << endl;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    C* p;
    if (n) p = new C1;
    else p = new C;
    p->display(); // dynamic link --> polymorphism runtime

}