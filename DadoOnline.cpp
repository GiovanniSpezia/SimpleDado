/*
✔ PROGETTO: Dato onlines
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, d;

    cout << "               --------------------" << endl;
    cout << "               |    Dado Online    |" << endl;
    cout << "               --------------------" << "\n\n\n\n";

    srand (time(NULL));

    cout << "Numero generato: " << rand() % 6 + 1 << endl;

}