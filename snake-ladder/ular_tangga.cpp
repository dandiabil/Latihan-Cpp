//program permainan ular tangga
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <cstdlib>
using namespace std;

/*
v1
1. Pilih banyak pemain
4. setiap pemain melempar dadu
5. ulangi sampai selesai

v2
2. pilih karakter setiap pemain
3. keluar map permainan
*/

	int main(){
		int score[5] = {0, 0, 0, 0, 0};
		int play;
		char chr[4];
		bool gameOver = 0;
		srand(time(0));

		cout << "PRESS ENTER TO PLAY !!" << endl;
		getch();
		do{
		system("cls");
		cout << "How Many Players : ";
		cin >> play;

		switch(play){
			case 2:
				cout << "\n2 Players Joined The Game" << endl;
				getch();
				break;
				
			case 3:
				cout << "\n3 Players Joined The Game" << endl;
				getch();
				break;
				
			case 4:
				cout << "\n4 Players Joined The Game" << endl;
				getch();
				break;
				
			default:
				cout << "\nInvalid Options" << endl;
				getch();
				break;
		}
	}while(play != 2 && play != 3 && play != 4);
	
	while(gameOver != 1){
		system("cls");	
		for(int i = 1; i <= play; i++){
			int acak = (rand() % 6) + 1;
			if(score[i] ==  100 && score[i] > 100){
				cout << "Congratulations To Player " << i << endl;
				getch(); 
				gameOver = 1;				
			}else{
				cout << "\nPlayer " << i << " turn !" << endl;
				cout << "Press to roll dice.." << endl;
				getch();
				cout << acak;	
				score[i] += acak;
			}
		cout << endl;
		}
		cout << endl;
		for (int i = 1; i <= play; i++){
			cout << "Player " << i << " Score : " << score[i] << endl;
		}
		getch();
	}
	return 0;
	}


