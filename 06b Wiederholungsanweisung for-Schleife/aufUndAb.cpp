#include<iostream>
using namespace std;



int main()
{
    double ober, unter;

    cout<<"Bitte geben sie die Obergrenze an:";
    cin>>ober;

    cout<<"Bitte geben sie die Untergrenze an:";
    cin>>unter;

    for  (int i=unter; i<ober; i= i++)
    {
        cout<<i<<',';
    }
    cout<<endl;

    for  (int i=ober; i<unter; i= i--)
    {
        cout<<i<<',';
    }

    return 0;

}
