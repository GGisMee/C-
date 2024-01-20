#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player, char computer);
void computerMove(char *spaces, char player, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces, char player, char computer);

int main(){
    char spaces[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char player = 'X';
    char computer = 'O';
    char running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player, computer);
        drawBoard(spaces);
        if (checkWinner(spaces,player,computer)){
            running = false;
            break;
        } 
        else if (checkTie(spaces, player, computer)){
            running = false;
            break;
        }
        computerMove(spaces, player, computer);
        drawBoard(spaces);
        if (checkWinner(spaces,player,computer)||checkTie(spaces, player, computer)){
            running = false;
            break;
        }
    }
}

void drawBoard(char *spaces){
    std::cout<< "\n";
    for (int i=0; i<3; i++){
        std::cout<< "     |     |     \n";
        std::cout<< "  "<<spaces[3*i]<<"  |  " << spaces[3*i+1] << "  |  "<<spaces[3*i+2]<<"  \n";
        std::cout<< "_____|_____|_____\n";
    }
    std::cout<< "\n";
    

}
void playerMove(char *spaces, char player, char computer){
    int number;
    do{
        std::cout << "Enter a spot on the grid (1-9): ";
        std::cin >> number;
        number--;
        if((spaces[number] != player) && (spaces[number] != computer)){
            std::cout<<spaces[number]<<computer;
            spaces[number] = player;
            break;
        }
        std::cout<<!(number > 0) << !(number < 8) << (spaces[number] != computer);

    }while ((!(number > 0) || !(number < 8)) || (spaces[number] == computer));
}
void computerMove(char *spaces, char player, char computer){
    int number;
    srand(time(0));
    do{
        number = rand()%9;
    }while(spaces[number]==player || spaces[number]==computer);
    spaces[number] = computer;
        
}
bool checkWinner(char *spaces, char player, char computer){
    int num = 0;
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "You won!" : std::cout<< "You lost";
    }
    else if (spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "You won!" : std::cout<< "You lost";
    }
    else if (spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "You won!" : std::cout<< "You lost";
    }
    else if (spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "You won!" : std::cout<< "You lost";
    }
    else if (spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "You won!" : std::cout<< "You lost";
    }
    else{
        return 0;
    }
    return 1;
}
bool checkTie(char *spaces, char player, char computer){
    for (int i = 0; i< 9; i++){
        if ((spaces[i] != player) && (spaces[i] != computer)){
            return 0;
        }
    }
    std::cout<<"Its a tie";
    return 1;
}