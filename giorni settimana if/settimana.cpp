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
{   unsigned int ngiorno;

    cout<<"Inserire il numero del giorno"<<endl;
    cin>>ngiorno;

    if (ngiorno==1)
    cout<<"Lunedi'\n";
    	else
    	{if (ngiorno==2)
    	cout<<"Martedi'\n";
    		else
    		{if (ngiorno==3)
    		cout<<"Mercoledi'\n";
    			else
    			{if (ngiorno==4)
    			cout<<"Giovedi'\n";
    				else
    				{if (ngiorno==5)
    				cout<<"Venerdi'\n";
    					else
    					{if (ngiorno==6)
    					cout<<"Sabato\n";
    						else
    						{if (ngiorno==7)
    						cout<<"Domenica\n";
    							else
    							cout<<"Errore\n";
							}
						}
					}
				}
			}
		}
	system("PAUSE");
   return 0;
}


