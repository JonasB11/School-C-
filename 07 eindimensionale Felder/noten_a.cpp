#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


int main()
{
    const int ANZAHL=20;
    int noten[ANZAHL];
    int index =0;
    int note;

    cout<<"Notenberechnung"<<endl;
    cout<<"(<1 beendet die Eingabe...)"<<endl;

    do
    {
        cout<<"Note:"<<"";
        cin>>note;

        if (note>0)
        {
            noten[index] = note;
        }
        index++;
        cout<<endl;


    }while (index<ANZAHL && note>0);

    for (i=0; i<index; i++)

    return 0;
}

