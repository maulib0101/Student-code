#include<iostream>
#include"Student.h"
//"Changes made by Dnyaneshwar"
using namespace std;

void acceptInfo(){
	cin>>marks1>>marks2>>marks3;
}
 double avg(float marks1,float marks2,float marks3){
 	avg=(marks1+marks2+marks3)/3;
 	return avg;
 }
