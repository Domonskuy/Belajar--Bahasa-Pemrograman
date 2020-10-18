#include <iostream>
using namespace std;
 
int main()
{
    int total;
    
    cout << "=== Program Pembayaran ===\n";
    cout << "Masukan total belanja: ";
    cin >> total;


    if (total > 150000) // total lebih besar dari 100.000
    {
        cout<< "Selamat! anda dapat hadiah"<< "\nTerimakasih sudah berbelanja di toko kami";
    }
    
    else{ 
    cout << "Maaf anda belum dapat hadiah";
    }

    return 0;
}
