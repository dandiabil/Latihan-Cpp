#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main(){
	
	srand(time(0));
	int tebak = (rand() % 5) + 1;
	int tebakan;
	int jumlahTebakan = 1;
	int batasTebakan;
	bool tebakanHabis = false;
	int pil;
	
	cout << "Selamat Datang !!!" << endl;
	cout << "\nPilih Level Kesulitan" << endl;
	cout << "1. Mudah" << endl;
	cout << "2. Sedang" << endl;
	cout << "3. Sulit" << endl;
	cout << "\nMasukkan Pilihan : ";
	cin >> pil;
	cout << endl;
	
	if(pil == 1){
		batasTebakan = 3;
		tebak = (rand() % 5) + 1;
		cout << "Anda mendapatkan 3 kesempatan untuk menebak angka yang sudah diacak (1 - 5)" << endl;
		cout << "Tekan Enter" << endl;
		getch();
	}
	else if(pil == 2){
		batasTebakan = 5;
		tebak = (rand() % 10) + 1;
		cout << "Anda mendapatkan 5 kesempatan untuk menebak angka yang sudah diacak (1 - 10)" << endl;
		cout << "Tekan Enter" << endl;
		getch();
	}
	else if(pil == 3){
		batasTebakan = 20;
		tebak = (rand() % 20) + 1;
		cout << "Anda mendapatkan 20 kesempatan untuk menebak angka yang sudah diacak (1 - 25)" << endl;
		cout << "Tekan Enter" << endl;
		getch();
	}
	
	
	while(tebak != tebakan && !tebakanHabis){
		if(jumlahTebakan <= batasTebakan){
			cout << "KESEMPATAN " << jumlahTebakan;
			cout << endl;
			cout << "\nMasukkan Angka Tebakan : "; cin >> tebakan;
			if(tebakan > tebak){
				cout << "Terlalu Besar" << endl;
			}
			else if(tebakan < tebak){
				cout << "Terlalu Kecil" << endl;
			}
			cout << endl;
			jumlahTebakan++;
		}
		else{
			tebakanHabis = true;
		} 
	}
	if(tebakanHabis){
		cout << "--------------------" << endl;
		cout << "TEBAKAN HABIS" << endl;
		cout << "\nTebakan Adalah : " << tebak;
	}
	else{
		cout << "--------------------" << endl;
		cout << "TEBAKAN BENAR" << endl;
	}	
	cin.get();
	return 0;
}
