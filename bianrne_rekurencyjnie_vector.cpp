#include <iostream>
#include <vector>

using namespace std;

vector <int> Binarne(int number)
{
   static int reszta = 0;

   static vector <int> vector_reszt;

   if(number == 0)
        return vector_reszt;

    reszta = number%2;

    vector_reszt.push_back(reszta);

    return Binarne(number/2);
}

int main()
{
    int number = 20;

    vector <int> myvector = Binarne(number);

    std::cout << "Wersja  binarna liczby " << number << " to ";

      for (int i = 0; i < myvector.size(); i++)
   {
       cout << myvector[i];
   }

   cout << ". " << endl;

    return 0;
}

