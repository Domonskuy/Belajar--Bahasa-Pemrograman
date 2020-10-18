#include <iostream>
#include <conio.h>
using namespace std;
main(){
	double nilaiujian;
	char grade;
	int pil,angka,i,j;
	cout<<"=====Pilihan=====\n";
	cout<<"1. Grade\n";
	cout<<"2. Looping\n";
	cout<<"\n";
	cout<<"=====================\n";
	cout<<"Masukan Pilihan: ";
	cin>>pil;
	switch(pil) {
		case 1:
			cout<<"Masukan Nilai Ujian : ";
			cin>>nilaiujian;
			
				if(nilaiujian >=80)
				grade='A';
				else
				if(nilaiujian >=70)
				grade='B';
				else
				if(nilaiujian >=60)
				grade='C';
				else
				if(nilaiujian >=50)
				grade='D';
				else
				grade='E';
				cout<<"Grade Anda Adalah "<<grade<<endl;
				break;
		case 2:
			
			for(i=1;i <=5; i++){
				for(j=1; j <=i;j++){
					cout<<"*";
				}
				cout<<endl;
			}
	}
}
