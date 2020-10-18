#include <iostream>
using namespace std;

int main()
{
    float a,b,t,luas;
    
    
    cout<<"Masukkan sisi a: ";
    cin>>a;
   
    cout<<"Masukkan sisi b: ";
    cin>>b;
  
    cout<<"Masukkan tinggi: ";
    cin>>t;
    
    
    luas= 0.5*(a+b)*t;
    
    cout<<"\nLuas trapesium: "<< luas << endl;
    
    return 0;

}
    