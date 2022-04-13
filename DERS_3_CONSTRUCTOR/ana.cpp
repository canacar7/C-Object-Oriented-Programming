#include <iostream>
#include <string> 

#include "GradeBook.h"
using namespace std;

int main()
{

	GradeBook GradeBook1("eee482 data structure", "8");
	GradeBook GradeBook2("0123456789abcdef0123456789abscde", "8");
	GradeBook GradeBook3(GradeBook1); //copy consturcter

	
	cout << "alinan dersler main de deneme :" << GradeBook1.getCourseName() << " " << GradeBook1.getDonem() << endl;
	cout << "alinan dersler main de deneme :" << GradeBook2.getCourseName() << " " << GradeBook2.getDonem() << endl;
	cout << "alinan dersler main de deneme :" << GradeBook3.getCourseName() << " " << GradeBook3.getDonem() << endl; //copy constructer denemesi

}