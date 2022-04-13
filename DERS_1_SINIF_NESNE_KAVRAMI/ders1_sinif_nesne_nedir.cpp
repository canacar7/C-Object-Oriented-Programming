#include <iostream>
using namespace std;


class GradeBook
{

public:

    void displayMessage() const
    {
        cout << "ilk deneme" << endl;
    }
};


int main()
{ 
    GradeBook myGradeBook; //nesne olusturma
    myGradeBook.displayMessage();
}

