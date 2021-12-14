#include <iostream>
using namespace std;
int main(){
   string nama;
   float jumlah;
   int lama;
   int bunga;
   
   cout<<"masukan nama   : "; 
   getline(cin, nama);
   cout<<"masukan jumlah : ";
   cin>>jumlah;
   cout<<"masukan lama   : ";
   cin>>lama;
   cout<<"masukan bunga  :";
   cin>>bunga;
   
   cout<<endl;
   cout<<"nama   :"<<nama <<endl;
   cout<<"jumlah :"<<jumlah<<endl;
   cout<<"lama   :"<<lama;
   cout<<" tahun "<<endl;
   cout<<"bunga  :"<<bunga;
   cout<<"%"<<endl;
   return 0;

}
