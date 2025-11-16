#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    int n = 0;  //deklaracja zmiennej n, ktora bedziemy sprawdzac czy jest liczba pierwsza
    int d = 0;  //d przechowujaca dzielniki od 2
    
    cout<<"Podaj liczbe: ";  
    cin>> n;                                 
    
    if (n < 2) 
    {
        cout<< n <<" nie jest liczba pierwsza";
        return 0;
    }
    
    for (d = 2; d <= sqrt(n); d++)    //sprawdzamy dzielniki tylko do √n, jeśli liczba ma dzielnik większy niż √n, to drugi musi być mniejszy niż √n
    {
        if (n % d == 0)
        {
            cout<< n <<" nie jest liczba pierwsza";
            return 0;
        }
    }
    cout<< n <<" jest liczba pierwsza";
    return 0;
}
