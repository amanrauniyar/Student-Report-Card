// GradeTracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 
#include <string>
#include "GradeTrackingSystem.h""
using namespace std;


int main()
{
	
	string promptSelection;
	cout << "Would you like to run the example thingy?(Y/N):\n";
	cin >> promptSelection;
	if (promptSelection=="y"|| promptSelection == "Y")
	{
		
	}
	

}


//test code
void Example()
{
	Student s(69420, "john", "doe");

	Course example;
	example.courseID = 010;
	example.creditVal = 4.00;
	example.grade = 90;
	example.courseName = "Example";
	s.addCourse(example);
}