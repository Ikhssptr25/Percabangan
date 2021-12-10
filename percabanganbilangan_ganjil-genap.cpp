#include <iostream>
using namespace std;

int main(){
	int angka;
	cout<<"Masukkan Bilangan : ";
	cin>>angka;
	cout<<endl;
	
	if(angka%2==0){
		cout<<angka<<" "<<"Merupakan Bilangan Genap"<<endl;
	}else{
		cout<<angka<<" "<<"Merupakan Bilangan Ganjil"<<endl;
	}
	return 0;
}
