#include <iostream>
#include <string>
using namespace std;

class CBuch
{
  private:
    string verfasser, titel;
    int eJahr, invNr;
  public:
    void eingeben()
    {
        cout << "Verfasser: "<< endl;
        cin >> verfasser;
        cout << "Titel: "<< endl;
        cin >> titel;
        cout << "Erscheinungsjahr: "<< endl;
        cin >> eJahr;
        cout << "Inventarnummer: "<< endl;
        cin >> invNr;
    }

    void ausgeben()
    {
        cout << "Verfasser: "<< verfasser << endl;
        cout << "Titel: "<< titel << endl;
        cout << "Erscheinungsjahr: "<< eJahr << endl;
        cout << "Inventarnummer: "<< invNr << endl;
    }
};

int main()
{
    CBuch b1, b2;
    cout << "Buch 1: "<< endl;
    b1.eingeben();
    cout << "Buch 2: "<< endl;
    b2.eingeben();
    cout << "Buch 1: "<< endl;
    b1.ausgeben();
    cout << "Buch 2: "<< endl;
    b2.ausgeben();

    return 0;
}