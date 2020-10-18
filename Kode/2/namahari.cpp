#include <iostream>

using namespace std;

int main()
{
       int nrhari;

     cout<< "Masukkan angka untuk mengetahui hari apa(1-7): ";
     cin>>nrhari;

     switch(nrhari){
          case 1:
               cout<< "Hari ke "<<nrhari<<" : Senin";

               break;
          case 2:
               cout<< "Hari ke "<<nrhari<<" : Selasa";

               break;
          case 3:
               cout<< "Hari ke "<<nrhari<<" : Rabu";

               break;
          case 4:
               cout<< "Hari ke "<<nrhari<<" : Kamis";

               break;
          case 5:
               cout<< "Hari ke "<<nrhari<<" : Jum’at";

               break;
          case 6:
               cout<< "Hari ke "<<nrhari<<" : Sabtu";

               break;
          case 7:
               cout<< "Hari ke "<<nrhari<<" : Minggu";

               break;
          default:
               cout<<"Tidak ada hari ke "<<nrhari;
     }

     return 0;
}