#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    int n = 0;
    int d = 0;
    
    cout<<"Podaj liczbe: ";  //funkcja
    cin>> n;                                  //funkcja
    
    if (n < 2) 
    {
        cout<< n <<" nie jest liczba pierwsza";
        return 0;
    }
    
    for (d = 2; d <= sqrt(n); d++) 
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