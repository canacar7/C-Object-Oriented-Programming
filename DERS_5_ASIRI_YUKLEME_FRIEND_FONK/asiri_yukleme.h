#include <iostream>
using namespace std;

class Kisi
{
public:

	Kisi();
	Kisi(string, string, int);
	void Displaymessage();


	//== asiri yukleme
	bool operator== (const Kisi& oth);
	//++asiri yukleme 
	void operator++ ();		//prefix
	void operator++ (int);  //postfix

	/*
	* -friend fonksyionu ----- class da tanýmlanmasina ragmen non-mebner fonksiyondur
	* -bazi opertaoler non-member fonk ile asiri yuklenebilirler
	* -ilk olarak display mesage ile benzer fonk yazarak arasindaki farklara bakalim
	* -ikinci olarak da != operatorune asiri overload verelim
	*/

	/*
	*  1 friend fonksiyonu olustumr
	*  FRÝEND - donus tipi - fonksiyon adi - (classin bir objesi --- const Kisi &KisiNese)
	*/
	friend void Kisi_Friend_Fonk(const Kisi& Kisi_Nese);

	/*
	* 2 friend fonk kullanarak operator asiri yukleme 
	* FRIEND - DONUS TIPI - OPERATOR VE SIMGE - (operatorlerde kullanilacak her bir nesnenin tanimlanmasi)
	*/
	friend bool operator!=(const Kisi& BirinciNesne, const Kisi& ÝkinciNesne);





private:
	string Ad, Soyad;
	int Yas;
};
