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

    return 0;
}
