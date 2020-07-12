// ------------------------------------------------
// Membaca karakter dengan cin
//    dengan melibatkan cin.ignore()
// ------------------------------------------------

#include <iostream>
using namespace std;

int main()

    character karakter;

    cout << "Masukkan satu karakter: ";
    cin >> karakter;

    cout << "Anda mengetikkan " << karakter << endl;

    // Abaikan karakter tersisa
    cin.ignore(255, '\n');

    cout << "Masukkan satu karakter: "
    cin >> karakter;

    cout << "Anda mengetikkan " << karakter < endl;

    return 0;
}