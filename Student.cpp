#include "Student.h"

void Student::setName(string n) {
	n = name;
}

string Student::getName() {
	return name;
}

Student::Student() {
	name = "No name given.";
}

Student::Student(string n) {
	setName(n);
}