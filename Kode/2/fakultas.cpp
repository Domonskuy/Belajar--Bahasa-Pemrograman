#include <iostream>
using namespace std;
 
int main()
{
int fakultas;

cout<<"Fakultas:\n 1. Hukum\n 2. Pendidikan\n 3. Ilmu Kesehatan\n 4. Teknik\n";
cout<<"Masukan fakultas anda: ";
cin>>fakultas;

switch(fakultas){
case 1:
cout<<"Program Studi:\n1. Ilmu Hukum S1\n";
break;
case 2:
cout<<"Program Studi:\n1. Bimbingan Konseling (S-1)\n2. Pendidikan Guru PAUD (S-1)\n3. Pendidikan Guru SD (S-1)\n";
break;
case 3:
cout<<"Program Studi:\n 1. Ilmu Keperawatan (S-1)\n 2. Keperawatan (D-3)\n 3. Farmasi (D-3)\n 4. Profesi Ners\n";
break;
case 4:
cout<<"Program Studi:\n1. Teknik Industri (S-1)\n 2. Teknik Informatika (S-1)\n";
break;
}
}