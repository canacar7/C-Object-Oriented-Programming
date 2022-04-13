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
	//kisilerin isim ve yaslaari ayni olup olmamasi kontrol� sagladi
	return(Ad == oth.Ad && Soyad == oth.Soyad && Yas == oth.Yas);
}

//prefix
void Kisi :: operator++() {
	Yas = Yas + 1;
}


void Kisi :: operator++(int) {
	Yas = Yas + 1;
}

/*
*  friend fonk ile tanimlama yapildiginde  bir sinifdan (Kisi ::) erisim saglmayiz direk fonk adini kullaniriz 
*  Kisi_Nese.Ad --- �yelere erisim verilen nesneden yapilablir direkt erisime izin yok
*/
void Kisi_Friend_Fonk(const Kisi& Kisi_Nese) {

	cout << "isim : " << Kisi_Nese.Ad << "  " << "soyad : " << Kisi_Nese.Soyad << "  " << "yas : " << "  " << Kisi_Nese.Yas << endl;
}

/*
* firend fonk ile asiri overlading
*/
bool operator!=(const Kisi& BirinciNesne, const Kisi& �kinciNesne) {

	return !(BirinciNesne.Ad == �kinciNesne.Ad && BirinciNesne.Soyad == �kinciNesne.Soyad && BirinciNesne.Yas == �kinciNesne.Yas);
}