#include <iostream>
#include <string> // program uses C++ standard string class

using namespace std;

class GradeBook
{
public:
	
	GradeBook(string, string);
	GradeBook(const GradeBook& oth); //copy constructer tanimlanan baska bir nesnein adresini alarak yapilir
	void setCourseName(string);
	string getCourseName();
	void setDonem(string);
	string getDonem();

	void Displaymessage();

private:
	string DersAdi, Donem;
};


