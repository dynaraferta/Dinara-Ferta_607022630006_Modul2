#include <iostream> 
using namespace std;

int main(){
	int pilihan;
	int saldo = 1000000000;
	int tarik;
	int sisa;
	
	cout<<"=====SELAMAT DATANG di MESIN ATM SEDERHANA====="<<endl;
	cout<<"1. Cek Saldo"<<endl;
	cout<<"2. Tarik Tunai"<<endl;
	cout<<"3. KELUAR"<<endl;
	cout<<"Masukan Pilihan Anda (1-3):";
	cin>> pilihan;
	
	switch (pilihan) {
		case 1:
			cout<<"Saldo Anda adalah = RP"<<saldo<<endl;
			break;
		case 2:
			cout<<"Masukkan jumlah yang ingin ditarik = Rp";
			cin>>tarik;
			
			if (tarik > saldo){
				cout<<"Saldo Anda Tidak Cukup";
			} else if (tarik < saldo){
				sisa = saldo - tarik;
				cout<<"Sisa saldo anda adalah = Rp"<<sisa<<endl;
			}
			break;
		case 3:
			cout<<"TERIMA KASIH TELAH MENGGUNAKAN ATM"<<endl;
			break;
		default:
			cout<<"tidak ada pilihan"<<endl;
			
	} 
	return 0;
}
