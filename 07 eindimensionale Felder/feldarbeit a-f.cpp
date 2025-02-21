#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


int main()
{
    const int ANZAHL=20;
    int zahlen[ANZAHL];
    int summe=0;
    int summe_gerade=0;
    int b;
    int r;
    int maxi=0;


    srand(time(NULL));
    b=2;

    for(int i=0; i<ANZAHL ;i++)
    {
        zahlen[i]= (rand()%50)+1;
    }
    //-----------------------------------------------------------------------------
    for(int i=0; i<ANZAHL ;i++)
    {
        cout<<zahlen[i]<<",";
    }
    cout<<endl;

    //-----------------------------------------------------------------------------
    for(int i=0; i<ANZAHL ;i++)
    {
        summe= summe+zahlen[i];
    }
    cout<<"Summe aller Zahlen="<<summe<<endl;
    //-----------------------------------------------------------------------------
    for(int i=0; i<ANZAHL ;i++)
    {

        r= zahlen[i]%b;

        if (r==0)
        {
          summe_gerade= summe_gerade+zahlen[i];
        }
    }
    cout<<"Summe aller geraden Zahlen="<<summe_gerade<<endl;
    //-----------------------------------------------------------------------------
    for(int i=0; i<ANZAHL ;i++)
    {


        if (maxi<zahlen[i])
        {
          maxi=zahlen[i];
        }
    }
    cout<<"Größte Zahl im Feld="<<maxi<<endl;
    //-----------------------------------------------------------------------------
    return 0;




}
