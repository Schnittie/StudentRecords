//
// Created by laure on 03.10.2023.
//

#ifndef STUDENTRECODS_LISTELEMENT_H
#define STUDENTRECODS_LISTELEMENT_H

#include "Student.h"
#include <string>

namespace std {

    class ListElement {
        Student* content;
        ListElement* next;
    public:
        ListElement(Student* student){
            content = student;
            next = nullptr;
        }
        ListElement* deleteStudent(int id){
            if (content->getId() == id){
                delete content;
                return next;
            }
            if (next == nullptr) return this;
            next = next->deleteStudent(id);
            return this;
        }
        void addStudent(Student* student){
            if (next == nullptr){
                ListElement* listElement = new ListElement(student);
                next = listElement;
                return;
            }
            next->addStudent(student);
        }

        ListElement *getNext() const {
            return next;
        }

        Student *getContent() const {
            return content;
        }

        void print(){
            content->printSelf();
            if (next == nullptr) return;
            next->print();
        }
    };

} // std

#endif //STUDENTRECODS_LISTELEMENT_H
