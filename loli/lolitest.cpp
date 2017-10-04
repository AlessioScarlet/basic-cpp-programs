/*-----------------------------------------------------------------------------
 NON PUOI RUBARE IL MIO PROGRAMMA
-----------------------------------------------------------------------------*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//------------------------------- main ----------------------------------------
int main()
{   unsigned int eta, etal;
	
	riprova:
		
	cout<<"1=Sono maggiorenne"<<endl;
    cout<<"2=Sono minorenne"<<endl;
    cin>>eta;
    
    
 
    switch(eta)
    {
    case 1:		cout<<"Inserire l'eta' della loli"<<endl;
                cin>>etal;
                {
				if (etal>=18)
                cout<<"no galera"<<endl;
                else
				cout<<"IN GALERA"<<endl;
            	} break;
            	
    case 2:		cout<<"Inserire l'eta' della loli"<<endl;
                cin>>etal;
                {
				if (etal>=18)
                cout<<"no galera"<<endl;
                else
                cout<<"no galera"<<endl;
            	} break;
    default:	cout<<"Errore, riprova fagotto"<<endl; goto riprova;
    }
				
				system("PAUSE");
   return 0;
}
