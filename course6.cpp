#include <iostream>
using namespace std;

// runtime polymorphism with multi-level inheritance

class worker {
    protected:
        int worked_hours;
    public:
        worker(int hours);
        virtual int salary();
};

worker::worker(int hours) {
    worked_hours = hours;
}

int worker::salary() {
    return worked_hours * 2;
}

class boss : public worker {
    public:
        boss(int hours);
        virtual int salary();
};

boss::boss(int hours) : worker(hours) {}

int boss::salary() {
    return worked_hours * 5;
}

class engineer : public boss {
    public:
        engineer(int hours);
        virtual int salary();
};

engineer::engineer(int hours) : boss(hours) {}

int engineer::salary() {
    return worked_hours * 4;
}

int main() {
    int n;
    cout << "Enter worker type (1: worker, 2: boss, 3: engineer): ";
    cin >> n;

    worker* p;
    switch (n) {
        case 1 : p = new worker(100); break;
        case 2 : p = new boss(100); break;
        case 3 : p = new engineer(100); break;

        default: p = new worker(100); break;
        
    }
    cout << "Salary: " << p->salary() << endl;

}