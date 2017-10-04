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
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); // oppure system("COLOR E9");
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
        area=base*altezza;
        cout<<"L'area e' di: ";
        cout<<area;
		system("PAUSE");
   return 0;
}
