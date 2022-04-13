#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
private:

   string Ders_adi;

    

public: 
    
    void displayMassage() const
    {
        cout << "derse hosgeldiniz " << "dersin adi" << " " <<  Ders_adi << "!" << endl;
    }

    void set_Course_Name(string ders_adi)
    {
        Ders_adi = ders_adi;
    }

    string get_Course_Name()
    {
        return Ders_adi;
    }

};


int main()
{

    string     dersin_adi,dersin_adi_set_fonk_deneme;
    GradeBook myGradeBook;
    
    cout << "dersin adini giriniz" << endl;

    //c de bulunan fonk 
    getline(cin, dersin_adi);               //ders adinin kullanicidan alinmasi
    cout << endl;

    myGradeBook.set_Course_Name(dersin_adi); //dersin adinin atanamsi
    dersin_adi_set_fonk_deneme = myGradeBook.get_Course_Name(); //atanan ders adinin alinmasi
    myGradeBook.displayMassage();           //ders icerigini paylasma

    cout << "deneme_get_fonk" << dersin_adi_set_fonk_deneme  << " " << endl; //get fonsk denemesi

}


