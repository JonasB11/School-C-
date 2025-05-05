#include <iostream>
using namespace std;

int main()
{
    char eingabe;

    do
    {
        // Ausgabe von "Guten Tag"
        cout << "Guten Tag" << endl;

        // Eingabe eines Buchstabens
        cout << "...nochmal, dann bitte j eingeben: ";
        cin >> eingabe;

    } while (eingabe == 'j'); // Wiederhole, solange 'j' eingegeben wird

    return 0;
}