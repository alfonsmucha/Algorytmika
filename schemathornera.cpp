#include <iostream>
using namespace std;
 
int funkcja(int *_wsp, int _st, int _x)

{
 
    if (_st == 0) 
    {
        return _wsp[0];  
    }
    return _x * funkcja(_wsp, _st-1, _x) + _wsp[_st];
    
    
}
 
int main()
{
     int st;
     int x;
    
    cout << "Podaj stopien wielomianu: ";
    cin >> st;
    
    int *wsp = new int [st+1]; //deklaracja wskaznika wsp bedzie wskazywal tablice zmiennych typu int o wielkosci stopien+1
    
    for (int i = 0; i <= st; i++)
    {
        cout << "Podaj wspolczynnik stojacy przy potedze " <<  st-i << ": "  ;
        cin >> wsp[i];
    }
    cout << "Podaj argument: ";
    cin >> x;
    cout << "W( " << x << " ) = "; 
    cout << funkcja(wsp, st, x);
    
    delete[] wsp;
    
    return 0;

}