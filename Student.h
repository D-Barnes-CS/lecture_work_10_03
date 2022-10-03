#pragma once
#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;
class Student { 
	private:
		string name;
	public:
		void setName(string n);
		string getName();
		Student();
		Student(string n);
};

