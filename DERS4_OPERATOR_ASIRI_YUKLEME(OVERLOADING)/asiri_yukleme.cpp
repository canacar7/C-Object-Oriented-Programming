#include <iostream>
#include "asiri_yukleme.h"
using namespace std;


Kisi::Kisi()
	:Ad(""), Soyad(""), Yas(0)
{}

Kisi::Kisi(string name, string surname, int yas)
	: Ad(name), Soyad(surname), Yas(yas)
{}

void Kisi :: Displaymessage()
{
	cout << "isim : " << Ad << "  " << "soyad : " << Soyad << "  " << "yas : " << "  " << Yas << endl;
}

bool Kisi :: operator==(const Kisi& oth) {
	//asiri yukleme operatorlere belli ozellikler katar
	//kisilerin isim ve yaslaari ayni olup olmamasi kontrolü sagladi
	return(Ad == oth.Ad && Soyad == oth.Soyad && Yas == oth.Yas);
}

//prefix
void Kisi :: operator++() {
	Yas = Yas + 1;
}


void Kisi :: operator++(int) {
	Yas = Yas + 1;
}