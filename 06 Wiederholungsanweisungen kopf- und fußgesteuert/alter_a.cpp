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



    } while (alter < 5 || alter > 100);

    // Erfolgsmeldung
    cout << "Ist ein zulässiiges Alter" << endl;

    return 0;
}
