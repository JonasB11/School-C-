#include <iostream>
using namespace std;

int main()
{
    int alter;

    do
    {
        // Eingabe des Alters
        cout << "Bitte geben Sie Ihr Alter ein (zwischen 5 und 100): ";
        cin >> alter;

        // Überprüfung der Eingabe
        if (alter < 5 || alter > 100)
        {
            cout << "Alter muss zwischen" << endl;
        }

    } while (alter < 5 || alter > 100);

    // Erfolgsmeldung
    cout << "Vielen Dank! Ihr Alter wurde akzeptiert." << endl;

    return 0;
}
