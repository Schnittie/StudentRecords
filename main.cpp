#include <iostream>
#include "StudentRecords.h"
#include <string>

using namespace std;

int main() {
    StudentRecords records = StudentRecords();
    records.addStudent('h', 22, 1.5);
    records.addStudent('P', 50, 1.6);
    records.addStudent('L', 13, 1.4);
    records.printall();
    while (true) {
        cout
                << "\n hau mal raus jetzt was ich mache soll \n n: neuw student, d: delete, p: print records, e: end programm";
        char des;
        cin >> des;
        switch (des) {
            case 'n':
                records.newStuudent();
                break;
            case 'd':
                records.deleteStudent();
                break;
            case 'p':
                records.printall();
                break;
            case 'e':
                goto end;
            default:
                cout << "\n boa alda was willste denn mit dem kack, mach mal ernst hier ey";
        }
    }
    end:
    return 0;
}

