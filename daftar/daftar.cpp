#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

string daftar[10];
int len = sizeof(daftar)/sizeof(daftar[0]);

void hapusData();

int main(){
	
	char pilih;
	int pil, banyak;
	int i = 0;
	int tmp;
	
	do{
	system("cls");
	cout << "------------------------------" << endl;
	cout << "1. Masukkan ke dalam daftar" << endl;
	cout << "2. Liat daftar" << endl;
	cout << "3. Keluar" << endl;
	cout << "Pilih : "; 
	cin >> pil;
	
	switch(pil){
		case 1 :
			if(i == 0){
				cout << "\nTentukan Berapa Banyak Daftar (Max 10) : ";
				cin >> banyak;
				cin.ignore();
			}else{
				cout << "\nBuat Daftar Baru (Y/N) : ";
				cin >> pilih;
				cin.ignore();
				if (pilih == 'Y' || pilih == 'y'){
					i = 0;
					hapusData();
					cout << "\nTentukan Berapa Banyak Daftar (Max 10) : ";
					cin >> banyak;
					cin.ignore();
				}else{
					tmp = i;
					cout << "\nTambah Berapa Banyak Daftar : ";
					cin >> banyak;
					cin.ignore();
					banyak += banyak;
					swap(i, tmp);
				}
			}	
			do{	
				cout << "\nMasukkan Daftar Kegiatan : ";
				getline(cin, daftar[i]);
				i++;
				cout << tmp << " " << i << endl;
	}while(i < banyak);
			cout << "Tekan Enter..";
			break;
			
		case 2 :
			cout << "\nDaftar Kegiatan : " << endl;
			for(int i = 0; i < len; i++){
				if(len == 0){
					break;
				}else{
					cout << (i+1) << ". " << daftar[i];
					cout << endl;
				}
	}
			cout << "Tekan Enter..";
			break;
			
		case 3 :
			cout << "\nKeluar Program" << endl;
			break;
			
		default:
			cout << "\nPilihan tidak ada" << endl;		
	}
	getch();
	}while(pil != 3);
	
	cout << "Terima Kasih" << endl;
	
	return 0;	
} 
	

void hapusData(){
	for(int i = 0; i < len; i++){
		daftar[i].clear();
	}
}