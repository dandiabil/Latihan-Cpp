#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;
	
int main(){
	
	string comp, player;
	int score_player = 0, score_comp = 0, acak;
	srand(time(0));
	
	cout << "Permainan Suten Jepang" << endl;
	cout << "Klik Enter untuk memulai" << endl;
	cin.get();
	system("cls");
	cout << endl;
	//Mulai
	do{
	cout << "KETERANGAN :" << endl;
	cout << "Pilih Batu (batu), Gunting (gunting) atau Kertas (kertas)" << endl;
	
	//Pilih
	cout << "Pilihan Anda : ";
	cin >> player;
	
	//computer memilih
	cout << "Pilihan Lawan : ";
	acak = (rand() % 2) + 1;
	if(acak == 0){
		comp = "Batu";
	}
	else if(acak == 1){
		comp = "Gunting";
	}
	else if(acak == 2){
		comp = "Kertas";
	}
	cout << comp << endl;
	
	cin.get();
	
	//kondisi
	if(player == "batu" && comp == "Batu" || player == "Batu" && comp == "Batu"){
	}
	else if(player == "batu" && comp == "Gunting" || player == "Batu" && comp == "Gunting"){
		score_player += 1;
		score_comp += 0;
	}
	else if(player == "batu" && comp == "Kertas" || player == "Batu" && comp == "Kertas"){
		score_comp += 1;
		score_player += 0;
	}
	else if(player == "gunting" && comp == "Gunting" || player == "Gunting" && comp == "Gunting"){
	}
	else if(player == "gunting" && comp == "Batu" || player == "Gunting" && comp == "Batu"){
		score_comp += 1;
		score_player += 0;
	}
	else if(player == "gunting" && comp == "Kertas" || player == "Gunting" && comp == "Kertas"){
		score_player += 1;
		score_comp += 0;
	}
	else if(player == "kertas" && comp == "Kertas" || player == "Kertas" && comp == "Kertas"){
	}
	else if(player == "kertas" && comp == "Batu" || player == "Kertas" && comp == "Batu"){
		score_player += 1;
		score_comp += 0;
	}
	else if(player == "kertas" && comp == "Gunting" || player == "Kertas" && comp == "Gunting"){
		score_comp += 1;
		score_player += 0;
	}
	
	//skor
	cout << "Skor Anda : " << score_player << " vs Skor Lawan : " << score_comp << endl;
	if(score_player == 3){
		cout << "\nAnda Menang" << endl;
		break;
	}
	else if(score_comp == 3){
		cout << "\nAnda Kalah" << endl;
		break;
	}
	cin.get();
	system("cls");
	
}while(score_player < 3 || score_comp < 3);
	return 0;
}
