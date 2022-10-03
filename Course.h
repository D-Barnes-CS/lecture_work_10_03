#pragma once
#include "Student.h"
class Course {
    private: 
        string courseName; 
        Student *studentInfo;
    public:
        void setCourseName(string n);
        string getCourseName();
        void printStudentInfo();
        Course();
        Course(string n, Student *student, int num_stud);
};

