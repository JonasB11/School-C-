#include<iostream>
using namespace std;


int main()
{
  // Variablen deklarieren
  int tage;
  double skonto, prozent, endbetrag;
  double rechnungsbetrag;

  cout<<"Bitte geben Sie den Rechnungsbetrag ein: ";
  cin>> rechnungsbetrag;
  cout<<"Bitte geben Sie die Anzahl der Tage ein: ";
  cin>> tage;

  // Prozentsatz für Skonto berechnen
  if (tage > 8)
  {
    prozent = 1.5;
  }
  else
  {
    prozent = 4;
  }

  skonto = rechnungsbetrag / 100 * prozent ;
  endbetrag = rechnungsbetrag - skonto;
  cout << "Der Endbetrag betraegt: " << endbetrag << endl;
  cout << "Der Skonto betraegt: " << skonto << endl;
}