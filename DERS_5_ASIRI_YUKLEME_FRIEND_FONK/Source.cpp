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
	cout << " \n\n";

	/*
	* friend fonksiyonu olusturaln bir nesneyi alir
	*/
	cout << "friend fonk deneme \n" << endl;
	Kisi_Friend_Fonk(Kisi1);

	/*
	* friend fonk ile overlaoding
	*/
	cout << "friend fonk overloading deneme \n" << endl;
	Kisi1 != Kisi2 ? cout << "farkli kisiler" << endl : cout << "ayni kisiler" << endl;

	Kisi2++;
	Kisi1 != Kisi2 ? cout << "farkli kisiler" << endl : cout << "ayni kisiler" << endl;
}