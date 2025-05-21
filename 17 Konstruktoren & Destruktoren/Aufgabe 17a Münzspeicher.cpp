#include <iostream>
#include <string>
using namespace std;

class CMuenzspeicher
{
  private:
    int anzM05, anzM1, anzM2, maxM;
    double betragM;

  public:
    // Standardkonstruktor
    CMuenzspeicher() : anzM05(0), anzM1(0), anzM2(0), maxM(100), betragM(0.0) {}

    // Allgemeiner Konstruktor
    CMuenzspeicher(int maxMuenzen) : anzM05(0), anzM1(0), anzM2(0), maxM(maxMuenzen), betragM(0.0) {}

    // Methode zum Einwurf von Münzen
    void einwurf(double wert)
    {

        if (wert == 0.5)
        {
          if (anzM05 < maxM)
          {
            anzM05++;
            betragM += 0.5;
            cout << "50 Cent eingeworfen." << endl;
          }
          else
          {
            cout << "--> 50-Cent-Schacht ist voll!" << endl;
          }
        }
        else if (wert == 1.0)
        {
          if (anzM1 < maxM)
          {
            anzM1++;
            betragM += 1.0;
            cout << "1 Euro eingeworfen." << endl;
          }
          else
          {
            cout << "--> 1-Euro-Schacht ist voll!" << endl;
          }
        }
        else if (wert == 2.0)
        {
          if (anzM2 < maxM)
          {
            anzM2++;
            betragM += 2.0;
            cout << "2 Euro eingeworfen." << endl;
          }
          else
          {
            cout << "--> 2-Euro-Schacht ist voll!" << endl;
          }
        }
        else
        {
          cout << "--> Nur 2EUR, 1EUR oder 50 Cent Muenzen!!!" << endl;
        }

    }

    // Methode zum Ausgeben des Gesamtbetrags
    double betrag()
    {
      cout << "Es befinden sich " << betragM << " EUR im Muenzspeicher" << endl;
      return betragM;
    }

    // Methode zum leeren des Muenzspeicher
    void leeren()
    {
      if (anzM05 == 0 && anzM1 == 0 && anzM2 == 0)
      {
        cout << "--> Muenzspeicher ist bereits leer." << endl;
      }
      else
      {
      anzM05 = 0;
      anzM1 = 0;
      anzM2 = 0;
      betragM = 0.0;
      cout << "--> Muenzspeicher wurde geleert." << endl;
      }
    }




};

int main()
{
  CMuenzspeicher muenzspeicher(5);

  muenzspeicher.betrag();
  muenzspeicher.einwurf(0.5);
  muenzspeicher.einwurf(0.5);
  muenzspeicher.einwurf(0.5);
  muenzspeicher.einwurf(0.5);
  muenzspeicher.einwurf(0.5);
  muenzspeicher.einwurf(0.5);
  muenzspeicher.betrag();
  muenzspeicher.leeren();
  muenzspeicher.betrag();
  muenzspeicher.leeren();
  return 0;
}
