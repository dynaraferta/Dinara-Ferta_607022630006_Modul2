#include <iostream>
using namespace std;
int main(){
	int pilihan;
	int uang;
	int A = 5000;
	int B = 7000;
	int C = 10000;
	
	cout<<"======Selamat Belanja======"<<endl;
	cout<<"1.Minuman A:Rp"<<A<<endl;
	cout<<"2.Minuman B:Rp"<<B<<endl;
	cout<<"3.Minuman C:Rp"<<C<<endl;
	cout<<"Masukkan pilihan Anda (1-3):";
	cin>>pilihan;
	cout<<"Masukkan jumlah uang:Rp";
	cin>>uang;
	
	switch (pilihan){
		case 1:
			if (uang >= A){
			float total = uang - A;
			cout<<"Sisa uang Anda:Rp"<<total<<endl;
			cout<<"Anda berhasil membeli minuman"<<endl;
			} else {
				cout<<"Uang tidak cukup!"<<endl;
			}
			break;
			
		case 2:
			if (uang >= B){
			float total = uang - B;
			cout<<"Sisa uang Anda:Rp"<<total<<endl;
			cout<<"Anda berhasil membeli minuman"<<endl;
			} else {
				cout<<"Uang tidak cukup!"<<endl;
			}
			break;
			
		case 3:
			if (uang >= C){
			float total = uang - C;
			cout<<"Sisa uang Anda:Rp"<<total<<endl;
			cout<<"Anda berhasil membeli minuman"<<endl;
			} else {
				cout<<"Uang tidak cukup!"<<endl;
			}
			break;
			
			default:
				cout<<"Terima Kasih Sudah Berbelanja";
	}
	return 0;
}
