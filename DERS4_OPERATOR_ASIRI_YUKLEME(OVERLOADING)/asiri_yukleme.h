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

private:
	string Ad, Soyad;
	int Yas;
};
