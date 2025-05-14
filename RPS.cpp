#include<iostream>
#include<ctime>
#include<string>

char getPlayer();
char getComputer();
void showChoice(char player, char computer);
void getWinner(char player, char computer,int &PlayerWin, int &computerWin, int &draw);
void showStats(int amount, int &playerWin, int &computerWin, int &draw);
std::string getRank(int playerWin);


int main(){
    char player;
    char computer;
    char playAgain;
    int amount = 0;
    int playerWin = 0;
    int computerWin = 0;
    int draw = 0;
     srand(time(NULL));
    do{
    player = getPlayer();
    computer = getComputer();

    showChoice(player, computer);

    getWinner(player,computer, playerWin, computerWin, draw);

    std::cout<<"Do you want to play again?(y/n)\n";
    std::cin>>playAgain;
    amount++;


    }while(playAgain == 'y' || playAgain == 'Y');

    showStats(amount,playerWin,computerWin,draw);



    return 0;
}

char getPlayer(){
    char player;
    do{
    std::cout<<"Welcome to RPS game!\n";
    std::cout<<"r - rock; p - paper; s -scissors\n";
    std::cin>>player;

    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputer(){
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;

}

void showChoice(char player, char computer){
    std::cout<<"You chossen: "<<player<<std::endl;
    std::cout<<"Computer chossen: "<<computer<<std::endl;

}

void getWinner(char player,char computer,int &playerWin, int &computerWin, int &draw){
     switch(player){
        case 'r': if(computer == 'r'){
            std::cout<<"Tie!\n";
            draw++;
        }else if(computer == 'p'){
            std::cout<<"You lose!\n";
            computerWin++;
        }else{
            std::cout<<"You win!\n";
            playerWin++;
            
        }
        break;


        case 'p': if(computer == 'r'){
            std::cout<<"You win!\n";
            playerWin++;
        }else if(computer == 'p'){
            std::cout<<"Tie!\n";
            draw++;
        }else{
            std::cout<<"You lose!\n";
            computerWin++;
        }
        break;

        case 's': if(computer == 'r'){
            std::cout<<"You lose!\n";
            computerWin++;
        }else if(computer == 'p'){
            std::cout<<"You win!\n";
            playerWin++;
        }else{
            std::cout<<"Tie!\n";
            draw++;
        }
        break;
    }


}

std::string getRank(int playerWin){
    if(playerWin < 3){
        return "Rookie";
    }else if(playerWin < 5){
        return "Based man";
    }else{
        return "I am Legend";
    }
}

void showStats(int amount, int &playerWin, int &computerWin, int &draw){
    std::cout<<"You played: "<<amount<<" times\n";
    std::cout<<"You won: "<<playerWin<<" times\n";
    std::cout<<"You lose: "<<computerWin<<" times\n";
    std::cout<<"Draw was: "<<draw<<" times\n";
    std::cout<<"Your current Rank is: "<<getRank(playerWin)<<std::endl;

    std::string oldRank = getRank(playerWin - 1); 
    std::string newRank = getRank(playerWin);
if (oldRank != newRank) {
    std::cout << " Congrats! Your rank has increased to: " << newRank << "!\n";
}

}
