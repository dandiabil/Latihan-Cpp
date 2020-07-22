#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;

    char papan[5][5] = {
    '1',' ','2',' ','3',
    '4',' ','5',' ','6',
    '7',' ','8',' ','9'
};
    char player = 'X';
    int pilihan, acak;    
    bool gameOver = false;
    void board();
    int playerTurn();
    void gameStart();
    void botTurn();
    void logic();

/*
# # # # #
# X O X #
# O X O #
# X O X #
# # # # #
*/

int main(){

    srand(time(0));
    gameStart();

    return 0;
}

void board(){
    cout << "# # # # #" << endl;
    for(int i = 0; i < 3; i++){
        cout << "# ";
        for(int j = 0; j < 5; j++){
            cout << papan[i][j];
      }
        cout << " #";
        cout << endl;
    }
    cout << "# # # # #" << endl;
}

int playerTurn(){
    cout << "--Player Turn--" << endl;
    cout << "Pilih Nomor : ";
    cin >> pilihan;
        switch(pilihan){
            case 1:
                papan[0][0] = player;
                break;
            case 2:
                papan[0][2] = player;
                break;
            case 3:
                papan[0][4] = player;
                break;
            case 4:
                papan[1][0] = player;
                break;
            case 5:
                papan[1][2] = player;
                break;
            case 6:
                papan[1][4] = player;
                break;
            case 7:
                papan[2][0] = player;
                break;
            case 8:
                papan[2][2] = player;
                break;
            case 9:
                papan[2][4] = player;
                break;
            default:
                cout << "Pilihan Tidak Ada" << endl;
                break;
        }
        cin.get();
    return pilihan;
}

void botTurn(){
    do{
        acak = (rand() % 9) + 1;
        if(acak == 1 && papan[0][0] == '1'){
            papan[0][0] = 'O';
        }
        else if(acak == 2 && papan[0][2] == '2'){
            papan[0][2] = 'O';
        }           
        else if(acak == 3 && papan[0][4] == '3'){
            papan[0][4] = 'O';
        }
        else if(acak == 4 && papan[1][0] == '4'){
            papan[1][0] = 'O';
        }
        else if(acak == 5 && papan[1][2] == '5'){
            papan[1][2] = 'O';
        }
        else if(acak == 6 && papan[1][4] == '6'){
            papan[1][4] = 'O';
        }
        else if(acak == 7 && papan[2][0] == '7'){
            papan[2][0] = 'O';
        }
        else if(acak == 8 && papan[2][2] == '8'){
            papan[2][2] = 'O';
        }
        else if(acak == 8 && papan[2][4] == '9'){
            papan[2][4] = 'O';
        }
    }while(acak == pilihan);
}


void gameStart(){
    cout << "-----TIC TAC TOE-----"<< endl;
    cout << "Klik Enter Untuk Melanjutkan.."<< endl;
    cin.get();
    system("cls");
    while(!gameOver){
        system("cls");
        board();
        playerTurn();
        botTurn();
        logic();
    }
}

void logic(){
    if(papan[0][0] == 'X' && papan[0][2] == 'X' && papan[0][4] == 'X' || papan[1][0] == 'X' && papan[1][2] == 'X' && papan[1][4] == 'X' || papan[2][0] == 'X' && papan[2][2] == 'X' && papan[2][4] == 'X' || papan[0][0] == 'X' && papan[1][0] == 'X' && papan[2][0] == 'X' || papan[0][2] == 'X' && papan[1][2] == 'X' && papan[2][2] == 'X' || papan[0][4] == 'X' && papan[1][4] == 'X' && papan[2][4] == 'X' || papan[0][0] == 'X' && papan[1][2] == 'X' && papan[2][4] == 'X' || papan[2][0] == 'X' && papan[1][2] == 'X' && papan[0][4] == 'X')
    {
        system("cls");
        board();
        gameOver = true;
        cout << "KAMU MENANG !!!" << endl;
    }
    else if(papan[0][0] == 'O' && papan[0][2] == 'O' && papan[0][4] == 'O' || papan[1][0] == 'O' && papan[1][2] == 'O' && papan[1][4] == 'O' || papan[2][0] == 'O' && papan[2][2] == 'O' && papan[2][4] == 'O' || papan[0][0] == 'O' && papan[1][0] == 'O' && papan[2][0] == 'O' || papan[0][2] == 'O' && papan[1][2] == 'O' && papan[2][2] == 'O' || papan[0][4] == 'O' && papan[1][4] == 'O' && papan[2][4] == 'O' || papan[0][0] == 'O' && papan[1][2] == 'O' && papan[2][4] == 'O' || papan[2][0] == 'O' && papan[1][2] == 'O' && papan[0][4] == 'O')
    {
        system("cls");
        board();
        gameOver = true;
        cout << "KAMU KALAH !!!" << endl;
    }
}
