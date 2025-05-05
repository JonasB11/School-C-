#include <iostream>
using namespace std;

int main()
{
  double umsatz, provision, bonus = 0;
  int jahre;

  // Eingabe des Umsatzes und der Betriebszugehörigkeit
  cout << "Bitte den Umsatz in Euro angeben: ";
  cin >> umsatz;

  cout << "Bitte die Anzahl der Jahre in der Firma angeben: ";
  cin >> jahre;

  // Berechnung der Provision
  if (umsatz < 100000)
  {
    provision = umsatz * 0.05; // 5% Provision
  }
  else
  {
    provision = umsatz * 0.075; // 7,5% Provision
  }

  // Berechnung des Bonus basierend auf der Betriebszugehörigkeit
  if (jahre > 15)
  {
    bonus = provision * 0.10; // 10% Bonus
  }
  else if (jahre > 10)
  {
    bonus = provision * 0.075; // 7,5% Bonus
  }
  else if (jahre > 5)
  {
    bonus = provision * 0.05; // 5% Bonus
  }

  // Gesamte Provision inklusive Bonus
  double gesamtProvision = provision + bonus;

  // Ausgabe der Ergebnisse
  cout << "Die Provision betraegt: " << provision << " Euro" << endl;
  cout << "Der Bonus betraegt: " << bonus << " Euro" << endl;
  cout << "Die gesamte Provision betraegt: " << gesamtProvision << " Euro" << endl;

  return 0;
}