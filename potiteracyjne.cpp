#include <iostream>
using namespace std;

int pot_iter(int baza_, int wyk_) //pot_iter zwraca wartosc typu int
{
    int wynik_ = 1; //zeby nie bylo przypadkowej wartosci wpisujemy 1 do zmiennej
    //int a = 0;
    //int n = ; 
    
    while(wyk_ > 0)
    {
        if((wyk_ % 2) == 1)
        {
            wynik_ = wynik_ * baza_;
        }
        baza_ = baza_ * baza_;
        wyk_ = wyk_ / 2;
    }
    return wynik_;
}



int main()
{ 
    int a = 1;
    int n = 0;
    
    cout<<"Podaj baze (a): ";  //funkcja
    cin>> a;                                  //funkcja
    cout<<"Podaj wykladnik (n): ";
    cin>> n;
    
    int wynik = pot_iter (a, n); //wywoluje funkcje, a wartosci zmiennych (a, n) wpisuje do zmiennych lokalnych funkcji
    
    cout<< a << "^" << n << " = ";
    cout<< wynik;
    return 0;
}