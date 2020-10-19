#include <iostream>
#include <vector>

// std::array - nowa tablica. podobnie jak vector dziala.

using namespace std;

void Binarne(int number, vector <int> &vector_reszt)
{
   //static int reszta = 0;

   if(number == 0)
        return; // przy voidzie

    int reszta = number%2;

    vector_reszt.push_back(reszta);

    return Binarne(number/2, vector_reszt);
}

int main()
{
    int number = 20;

    vector <int> myvector;

    Binarne(number, myvector);

    std::cout << "Wersja  binarna liczby " << number << " to ";

      for (int i = 0; i < myvector.size(); i++)
   {
       cout << myvector[i];
   }

   cout << ". " << endl;


    return 0;
}

