/*
	Program Name: lab2.cpp
	Programmer: Dai Tran
	Date: 2/26/2022
	Version: 1.2
	Description: Write an abstract class for Student with at least two pure virtual functions of your choice and a few private data members. Next, design a class named Undergraduate, which is derived from the Student class with a few private data members. Test and debug your program.
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string name;
	int id;
	string course;
	string status;

public:
	virtual void printStudentName() = 0;

	virtual void printStudentID() = 0;

	virtual void printStudentStatus() = 0;
};

class Undergraduate : public Student
{
private:
	string name;
	int id;
	string status;

public:
	Undergraduate(string input_name, int input_id)
	{
		name = input_name;
		id = input_id;
		status = "Undergraduate";
	}

	void printStudentName()
	{
		cout << name << endl;
	}

	void printStudentID()
	{
		cout << id << endl;
	}

	void printStudentStatus()
	{
		cout << "Undergraduate" << endl;
	}
};

int main()
{
	Student *student1 = new Undergraduate("Paul Morgan", 4325172);

	// calling virtual functions
	student1->printStudentID();

	student1->printStudentName();

	student1->printStudentStatus();

	return 0;
}