#include <iostream>
using namespace std;

unsigned int tablica_danych[]={1, 3, 5, 7, 9, 11, 13, 15, 18, 21, 23, 25, 28};
unsigned int dana = 0; 
unsigned int wielkosc_tablicy = 13;

int szukanie_binarne(unsigned int wyszukiwana_dana, const unsigned int *tablica, unsigned int size)
{
    int wynik = -1;
    int l = 0;
    int p = size - 1; 
    
    int sr = (l+p)/2;
    
    
    while (l <= p) 
    {
        //cout<< sr << " " << tablica[sr] << " ";
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
    cout<<"Podaj liczbe ktora chcesz znalezc: ";
    cin>> dana;
    //cout<<"\n";
    int wynik_szukania = szukanie_binarne (dana, tablica_danych, wielkosc_tablicy);
    if (wynik_szukania == -1) 
    {
        cout<<"Nie znaleziono "<< dana << "\n";
    }
    else 
    {
        cout<<"Liczba "<< dana << " wystepuje w zbiorze w komorce o indeksie: " << wynik_szukania << " \n";
    }
    return 0;
}