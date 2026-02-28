#include <iostream>
using namespace std;

// makes a reference to an integer, increments it, and returns the reference, not the copy
int& f(int& x) {
    x++;
    return x;
}

int f2(int x) {
    x++;
    return x;
}

void f3(int &x) {
    x++;
}


int main() {
    int y = 1;
    int& z = f(y); // z is a reference to the returned reference from f
    cout << "z: " << z << endl; // should print 2
    y++;
    cout << "z: " << z << endl; // should print 3

    cout << "f2(y): " << f2(y) << endl; // should print 4
    cout << y << endl; // should print 3, as y is unchanged by f2
    cout << z << endl; // should print 3, as z references y

    f3(y);
    cout << y << endl; // should print 4, as y is incremented by f3
    cout << z << endl; // should print 4, as z references y

    int arr[10];
    arr[0] = 222;
    arr[1] = 999;
    int* p_arr = arr; // pointer to the first element of the array
    cout << p_arr[0] << endl; // should print 222
    cout << arr << endl; // address of the first element
    cout << p_arr << endl; // address of the first element
    cout << *p_arr << endl; // should print 222
    cout << *(p_arr + 1) << endl; // should print 999
    cout << 0[arr] << endl; // address of the first element
    cout << 1[arr] << endl; // address of the second element
    cout << *(arr + 0) << endl; // should print 222
    cout << *(arr + 1) << endl; // should print 999

    int n, i;
    cout << "n = "; cin >> n;
    int *v = new int[n]; // dynamically allocate an array of n integers
    for (i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    delete[] v; // free the dynamically allocated memory
    return 0;
}