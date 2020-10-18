#include <iostream>
using namespace std;

int main()
{
    const float PHI = 3.141592;
    float jari_jari,luas,keliling;
    
    jari_jari = 10;
    luas = PHI*jari_jari*jari_jari;
    keliling = 2*PHI*jari_jari;
    
    cout << "Luas = " << luas << endl;
    cout << "Keliling = " << keliling << endl;
    
    return 0;
}