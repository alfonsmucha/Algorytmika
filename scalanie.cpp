#include <iostream>
#include <cstdlib>
using namespace std;

void Merge(int* _tab, int _l, int _m, int _r) 
{
    
    int lSize = _m - _l + 1;
    int rSize = _r - _m;
    
    
    int * tabL = new int [lSize];
    int * tabR = new int [rSize];
    
    
    for (int x = 0; x < lSize; x++)
    {
        tabL[x] = _tab[_l + x];
    }
    
    for (int y = 0; y < rSize; y++)
    {
        tabR[y] = _tab[_m + 1 + y];
    }
 
    int indexL = 0;
    int indexR = 0;
    int currIndex = _l;
    
    while (indexL < lSize && indexR < rSize)
    {
        if (tabL[indexL] <= tabR[indexR])
        {
            _tab[currIndex] = tabL[indexL++];
        }
        else
        {
            _tab[currIndex] = tabR[indexR++];
            
        }
        currIndex++;
    }
    

    
    while (indexL < lSize)
    {
        _tab[currIndex++] = tabL[indexL++];
    }
    
    while (indexR < rSize)
    {
        _tab[currIndex++] = tabR[indexR++];
    }
    
    delete[] tabL;
    delete[] tabR;
}


void MergeSort(int* tab, int l, int r) 
{
    
    if (r > l) 
    {
        int m = (l + r) / 2;
        MergeSort(tab, l, m);   // Podzielenie tablicy na lewa strone
        MergeSort(tab, m + 1, r);   // Podzielenie tablicy na prawa strone
        Merge(tab, l, m, r);
    }
}

  
 
int main()
{
    int rozmiar_tab;
    
        cout << "Wprowadz liczbe elementow do posortowania: ";
        cin >> rozmiar_tab;
        int * tabl = new int [rozmiar_tab];
        cout << endl;
        
        for (int indeks = 0; indeks < rozmiar_tab; indeks++)
        {
            tabl[indeks] = rand() % 100;
        }
        
        cout << "Tablica przed posortowaniem: " << endl;
        for (int ind = 0; ind < rozmiar_tab; ind++)
        {
            cout << tabl[ind];
            cout << " | ";
        }
        
        cout << endl << endl;
        
        cout << "Rozpoczecie sortowania" << endl << endl;
        
        
        MergeSort(tabl, 0, rozmiar_tab - 1);
        
        cout << "Tablica po sortowaniu: " << endl;
        for (int j = 0; j < rozmiar_tab; j++)
        {
            cout << tabl[j];
            cout << " | ";
        }
        
    return 0;    

}