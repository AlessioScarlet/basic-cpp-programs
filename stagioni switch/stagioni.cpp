/*-----------------------------------------------------------------------------
  Nome del programma: 
  Autore: 
  Data: 
  Descrizione: 

-----------------------------------------------------------------------------*/
#include <iostream>
using namespace std;



//------------------------------- main ----------------------------------------
int main()
{   unsigned int nstag;

    cout<<"Inserire il numero della stagione"<<endl;
    cin>>nstag;
    
    switch(nstag)
    {
    case 1:cout<<"Primavera"; break;
    case 2:cout<<"Estate"; break;
    case 3:cout<<"Autunno"; break;
    case 4:cout<<"Inverno"; break;
    default:cout<<"Errore"; break;
    }
	system("PAUSE");
   return 0;
}
