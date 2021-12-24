#include <iostream>
using namespace std;

int main (){
	
	/*ikhsan saputra
	  2117051037
	  kelas B*/
	  
   	
	// deklarasi variabel//
	int BTC;
	
	
	//input data
	cout<<"JUMLAH BITCOIN :";  
	cin>>BTC;
	cout<<endl;
	
	// percabangan output
	cout<<" -----KETERANGAN BITCOIN----- "<<endl;
	cout<<endl;
	
	if(BTC<1){
	cout<<"Tipe Ranking : Shrimp";
	} else if (BTC>=1 && BTC<10){
	cout<<"Tipe Ranking : Crab" ;
	} else if (BTC>=10 && BTC<50){
	cout<<"Tipe Ranking : Octopus";
	} else if (BTC>=50 && BTC<100){
	cout<<"Tipe Ranking : Fish";	
	} else if (BTC>=100 && BTC<500){
	cout<<"Tipe Ranking : Dolphin";
	} else if (BTC>=500 && BTC<1000){
	cout<<"Tipe Ranking : Shark";
	} else if (BTC>=1000 && BTC<5000){
	cout<<"Tipe Ranking : Whale";
	}else{ 
	cout<<"Tipe Ranking : Humpback"<<endl;
	}
	
	
	
	return 0;
}
