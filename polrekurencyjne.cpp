#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

double f(double x) //x zwraca wartosc typu int, argumenty sa wykorzystywane w obliczeniu wyniku
{
   return x*(x*(x-3)+2)-6;
    
}

double PolowieniePrzedzialow(double lewy_kraniec, double prawy_kraniec, double dokladnosc){

    if(f(lewy_kraniec) == 0.0)
        {
            return lewy_kraniec;
        }
        
    if(f(prawy_kraniec) == 0.0)
        {
            return prawy_kraniec;
        }

    double srodek = (lewy_kraniec + prawy_kraniec)/2;
        
    if(prawy_kraniec - lewy_kraniec <= dokladnosc)
        {
            return srodek;
        }
    if (f(lewy_kraniec)*f(srodek) < 0)
        {
            return PolowieniePrzedzialow(lewy_kraniec, srodek, dokladnosc);
        }
    return PolowieniePrzedzialow(srodek, prawy_kraniec, dokladnosc);
}    
int main()
{ 
    double a = -10;
    double b = 10;
    double epsilon = 0.00001;
    int precyzja = std::abs(std::log10(epsilon));
    cout << fixed << setprecision(precyzja);
    
    cout<<"Znalezione miejsce wynosi: " << PolowieniePrzedzialow(a, b, epsilon);  //funkcja
 
    return 0;
}