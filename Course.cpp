#include "Course.h"

void Course::setCourseName(string n) {
	n = courseName;
}

string Course::getCourseName() {
	return courseName;
}

void Course::printStudentInfo() {
	cout << studentInfo->getName();
}

Course::Course() {
	setCourseName("No class name given.");
	studentInfo = NULL;
}

Course::Course(string n, Student* student, int num_stud) {
	setCourseName(n); 
	studentInfo = new Student[num_stud];
	for (int i = 0; i <= num_stud; i++) {
		studentInfo[i] = Student(student[i].getName());
	}
}