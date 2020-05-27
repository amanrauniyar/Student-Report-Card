#include "GradeTrackingSystem.h"
#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
using namespace std;

//print all the courses
void Student::printCourses()
{
	if (courseVec.empty())
	{
		cout << "You haven't added any grades to the tracker\n";
	}
	else
	{
		cout << "Course ID|Course Name|Grade|Credits\n";
		for (int i = 0; i < courseVec.size(); i++)
		{
			//print course info 
			cout << courseVec[i].courseID << "|" << courseVec[i].courseName << "|"
				<< courseVec[i].grade << "|" << courseVec[i].creditVal << "\n";
			//TODO:check to see if this prints in a somewhat organized fashion
		}
	}
}

//return index of vector default val=-1
int Student::findCourse(int courseNum)
{
	//
	int index = -1;
	for (int i = 0; i < courseVec.size(); i++)
	{
		index = i;
	}
	return -1;
}


//add course to course list
void Student::addCourse(Course c)
{
	courseVec.push_back(c);
}


//remove course, return course struct as result
void Student::removeCourse(int courseNum)
{
	int index = findCourse(courseNum);
	if (index==-1)
	{
		
	}
	
}