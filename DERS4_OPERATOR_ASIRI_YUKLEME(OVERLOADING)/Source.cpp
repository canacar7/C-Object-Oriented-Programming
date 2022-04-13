#include <iostream>
#include "asiri_yukleme.h"
using namespace std;

int main()
{
	Kisi Kisi1("ahmet", "acar", 23);
	Kisi Kisi2("ahmet", "acar", 23);

	Kisi1.Displaymessage();
	Kisi2.Displaymessage();

	//== operatoru icin asiri yukleme
	Kisi1 == Kisi2 ? cout << "ayni kisiler" << endl : cout << "farki kisiler" << endl;

	//++ operatoru icin asiri yukleme
	Kisi1++;
	Kisi1.Displaymessage();
	Kisi2.Displaymessage();

	//== operatoru icin asiri yukleme
	Kisi1 == Kisi2 ? cout << "ayni kisiler" << endl : cout << "farki kisiler" << endl;

}