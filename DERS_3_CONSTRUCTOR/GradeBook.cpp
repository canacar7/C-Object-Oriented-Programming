#include <iostream>
#include <string> // program uses C++ standard string class

#include "GradeBook.h"
using namespace std;


GradeBook::GradeBook(string name, string donem)
{
	setCourseName(name);
	setDonem(donem);
}

GradeBook::GradeBook(const GradeBook& oth)
{
	cout << "copy constructer calisdi" << endl;
	DersAdi = oth.DersAdi;
	Donem   = oth.Donem;
}

void GradeBook::setCourseName(string name) 
{
	if (name.size() <= 25)
		DersAdi = name;

	if (name.size() > 25)
	{
		DersAdi = name.substr(0, 25); //0 dan itibaren 25 karakter der al

		cerr << "Name \"" << name << "\" exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
	}
}

void GradeBook::setDonem(string name)
{
	Donem = name;
}

string GradeBook::getCourseName()
{
	return DersAdi;
}

string GradeBook::getDonem()
{
	return Donem;
}

void GradeBook::Displaymessage()
{
	cout << "ders adi ve alinan donem \n" << DersAdi << " " << Donem << endl;
}