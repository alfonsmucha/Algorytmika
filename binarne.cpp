#include <iostream>
using namespace std;
 
void zamiana(int liczba) //funkcja typu void, nie zwraca nic

{
    int tab[31]; 
    int i = 0;  
 
    while (liczba != 0) //rozna
    {
        tab[i++] = liczba % 2;  
        liczba /= 2;  
    }
    for (int j = i - 1; j >= 0; j--)   
    {
        cout << tab[j];
    }
}
 
int main()
{
    int liczba;
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;
    cout << "Liczba " << liczba << " po zamianie na postac binarna: ";
    zamiana(liczba);
    
    return 0;

}
 