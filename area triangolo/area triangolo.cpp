/*-----------------------------------------------------------------------------
  Nome del programma: 
  Autore: 
  Data: 
  Descrizione: 

-----------------------------------------------------------------------------*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//------------------------------- main ----------------------------------------

void SetColor(short Color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,Color);
}

int main()
{
        float base, altezza, area;
        SetColor(2);
        cout<<"Inserisci la base ";
        cin>>base;
        cout<<"Inserisci l'altezza ";
        cin>>altezza;
        area=base*altezza/2;
        cout<<"L'area e' di: ";
        cout<<area;
		system("PAUSE");
   return 0;
}
