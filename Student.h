//
// Created by laure on 03.10.2023.
//

#ifndef STUDENTRECODS_STUDENT_H
#define STUDENTRECODS_STUDENT_H


#include <string>
#include <iostream>

namespace std {

    class Student {
        char name;
        int id;
        float grade;

    public:
        Student(char studentName, int studentId, float studentGrade){
            id = studentId;
            name = studentName;
            grade = studentGrade;
        }
        void printSelf(){
           cout << "\n";
           cout << "name: ";
           cout << name;
           cout << " id: ";
           cout << id;
           cout << " grade: ";
           cout << grade;
        }
        float getGrade(){
            return grade;
        }

        int getId() {
            return id;
        }
    };

} // std

#endif //STUDENTRECODS_STUDENT_H
