#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;


int main()
{
    string s1;
    int anzahl;



    cout<<"Bitte Wort eingeben: ";
    cin>>s1;
    anzahl=s1.length();

    cout<<"Der Satz lautet rueckwaerts:"<<endl;

    for(int i=s1.length();i>s1.length();i--)

    {
        cout<<s1[i];

    }
}
