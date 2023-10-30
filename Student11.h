#include<iostream>
using namespace std;

class Student{
	int rollno;
	string sname;
	float percen;
	float marks;
	
	Student(int rollno,string sname,float marks){
		this->rollno=rollno;
		this->sname=sname;
		this->marks=marks;
	}
	
	void getrollNo(int rollno){
		return rollno;
	}
	void acceptInfo();
	double avg();
	double Percen();
};


