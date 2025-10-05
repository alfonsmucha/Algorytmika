#include <iostream>
using namespace std;

unsigned int tablica_danych[]={1, 3, 5, 7, 9, 11, 13, 15, 18, 21, 23, 25, 28};
unsigned int dana = 25; 

int szukanie_binarne(unsigned int wyszukiwana_dana, unsigned int *tablica, unsigned int size)
{
    int wynik = -1;
    int l = 0;
    int p = size - 1; 
    
    int sr = (l+p)/2;
    
    
    while (l <= p) {
        if (tablica[sr] == wyszukiwana_dana)
        {
            return sr;
            
        }
        else
        {
            if (tablica[sr] > wyszukiwana_dana) 
            {
                p = sr - 1;
            }
            else
            {
                l = sr + 1;
            }
            sr = (l + p)/2;
        }
    }
    
    return wynik;
}



int main()
{
    cout<<"Wyszukiwanie binarne\n";
    int wynik_szukania = szukanie_binarne (dana, tablica_danych, 13);
    if (wynik_szukania == -1) 
    {
        cout<<"Nie znaleziono "<< dana << "\n";
    }
    else 
    {
        cout<<"Znaleziono "<< dana << " na " << wynik_szukania + 1 << " pozycji \n";
    }
    return 0;
}