//
// Created by laure on 03.10.2023.
//

#ifndef STUDENTRECODS_STUDENTRECORDS_H
#define STUDENTRECODS_STUDENTRECORDS_H

#include "ListElement.h"
#include <string>


namespace std {

    class StudentRecords {
        ListElement* first;
        int numbrStudents;
    public:
        StudentRecords(){
            first = nullptr;
            numbrStudents = 0;
        }
        void addStudent(char name, int id, float grade){
            Student* student = new Student(name,id,grade);
            if (numbrStudents++ == 0){
                ListElement* listElement = new ListElement(student);
                first = listElement;
                return;
            }
            first->addStudent(student);
        }
        void deleteStudent(int id){
            if (numbrStudents == 0) return;
            first = first->deleteStudent(id);
            numbrStudents--;
        }
        void deleteStudent(){
            int del;
            cout << "\n boa du willst doch safe wen loeschen";
            cin >> del;
            deleteStudent(del);
        }
        void printall(){
            if (numbrStudents == 0) return;
            first->print();
        }
        void newStuudent(){
            char initial;
            int id;
            float grade;
            cout << "\n gib mal den vornamen von nem neuen student";
            cin >> initial;
            cout << "gib mal dessen id";
            cin >> id;
            cout << "gib mal den note";
            cin >> grade;
            addStudent(initial,id,grade);
        }


        ~StudentRecords() {
            ListElement* current = first;
            while (current != nullptr) {
                ListElement* temp = current;
                current = current->getNext();
                delete temp->getContent();
                delete temp;
            }
        }
    };


} // std

#endif //STUDENTRECODS_STUDENTRECORDS_H
