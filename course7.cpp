#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
void interchange(T &x, T &y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main () {
    int n1 = 2, n2 = 3;
    cout << "Maximum of " << n1 << " and " << n2 << " is " << maximum(n1, n2) << endl;
    cout << maximum <double> (2.5, 3.5) << endl;
    cout << maximum <char> ('A', 'B') << endl;

    interchange<int>(n1, n2);
    cout << "After interchange, n1 = " << n1 << ", n2 = " << n2 << endl;
    return 0;
}