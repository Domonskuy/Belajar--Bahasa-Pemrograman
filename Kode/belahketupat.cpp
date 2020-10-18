#include <iostream>
using namespace std;

int main()
{
    int d1,d2;
    float luas;
    
    cout<<"Masukkan panjang diameter 1: ";
    cin>>d1;
    cout<<"Masukkan panjang diameter 2: ";
    cin>>d2;

    luas = 0.5*d1*d2;
    cout<<"\nLuas Belah ketupat: "<< luas << endl;
    return 0;

}
    