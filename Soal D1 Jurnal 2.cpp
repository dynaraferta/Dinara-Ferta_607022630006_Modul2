#include <iostream>
using namespace std;
int main (){
	int diskon;
	int TotalBelanja;
	int a = 100000;
	int b = 500000;
	
	cout<<"Masukkan total belanja:Rp";
	cin>>TotalBelanja;
	
	if (TotalBelanja >= a){
		cout<<"Diskon 10%"<<endl;
	} else if (TotalBelanja >= b){
		cout<<"Diskon 20%"<<endl;
	} else {
		cout<<"Tidak mendapatkan diskon"<<endl;
	}
	return 0;
}
