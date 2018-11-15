/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 8/10/2017
* Description: Driver to test the student class
* Copyright notice
*/

#include <iostream>
#include "Student.h"
#include "Module.h"

using namespace std;

int main() {

	Student stu1("Jeni Watt", "B004568656", "BSc Computing", 1);
	std::cout << stu1.GetEnrolled() << std::endl;
	Student stu2("Frank Lyons");
	std::cout << stu1.GetEnrolled() << std::endl;
	Student stu3;
	std::cout << stu1.GetEnrolled() << std::endl;

	stu3.SetName("Paul Doherty");
	stu3.SetCourse("BSc Geology");
	stu3.SetRegistrationID("B004556565");
	stu3.SetYearofStudy(3);

	return 0;
}

