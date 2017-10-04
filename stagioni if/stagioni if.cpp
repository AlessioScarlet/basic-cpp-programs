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
    
    {if (nstag==1)
    cout<<"Primavera";
    	else
    	{if (nstag==2)
    	cout<<"Estate";
    		else
    		{if (nstag==3)
    		cout<<"Autunno";
    			else
    			{if (nstag==4)
    			cout<<"Inverno";
    				else
    				cout<<"Errore";
					}
				}
			}
		}
	system("PAUSE");
   return 0;
}
