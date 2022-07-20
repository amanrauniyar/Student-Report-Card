#include <iostream>
#include <vector> 
#include <string>
using namespace std;

//course sturct
struct Course
{
	int courseID;
	string courseName;
	double creditVal;
	double grade;
};





//student class
class Student
{
public:
	//student constructor
	Student(int id, string first, string last)
	{
		studentID = id;
		firstName = first;
		lastName = last;
	};

	int getstudentID()
	{
		return studentID;
	};
	string getFirstName()
	{
		return firstName;
	};
	string getLastName()
	{
		return lastName;
	};
	void addCourse(Course c);
	void removeCourse(int i);
	void printCourses();
	int findCourse(int courseNum);
private:
	string firstName;
	string lastName;
	int studentID;
	//vector to store courses in
	vector<Course> courseVec;


};
