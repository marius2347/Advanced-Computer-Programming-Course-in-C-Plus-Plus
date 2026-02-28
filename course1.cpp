// class = data + operations (methods)
// struct in C = data collections
// struct in CPP = data + operations (methods)

#include <iostream>
using namespace std;

class Name {
    // encapsulation
    private:
        string first, middle, last;
    
    public:
        // constructor
        Name(string fname, string mname, string lname) {
            first = fname;
            middle = mname;
            last = lname;
        }

        string toString() {
            return first + " " + middle + " " + last;
        }
}; // end class definition

class Date {
    private:
        int day, month, year;

    public:
        Date(int m, int d, int year) {
            month = m;
            day = d;
            year = year;
        }

        Date(int m, int y) { // overloaded constructor
            month = m;
            day = 0;
            year = y;
        }

        void set_date(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }

        void set_month(int m) {
            if (m < 1 || m > 12) {
                cout << "Invalid month value" << endl;
                return;
            } else {
                month = m;
            }

        }
        void set_day(int d) {
            day = d;
        }

        void set_year(int y) {
            year = y;
        }


        int get_month() {
            return month;
        }

        void display_date() {
            cout << month << "/" << day << "/" << year << endl;
        }
    
};

class Parent{

    public:
        int id_p;
};

// Inheritance
class Child : public Parent {
    public:
        int id_c;
};

int main() {
    Name name("John", "F.", "Kennedy");
    cout << name.toString() << endl;

    Date today(10, 30, 2025);
    Date this_month(10, 2025);
    today.display_date();
    this_month.display_date();
    this_month.set_day(25);
    this_month.display_date();

    Child c;
    cout << c.id_c<< endl;
    cout << c.id_p<< endl;
    return 0;
}