#include<iostream>
#include<ctime>

char getUser();
char getComputer();
void showChoice(char choice);
void winner(char player, char computer);

int main(){
    char player;
    char computer;

    player =  getUser();

    std::cout<<"Your choice:\n";
     showChoice(player);

    computer = getComputer();
    std::cout<<"Computer choice:\n";
    showChoice(computer);

    winner(player,computer);

    return 0;
}

char getUser(){
    char player;
    std::cout<<"RPS game!\n";


    do{
    std::cout<<"r for rook\n";
    std::cout<<"p for paper\n";
    std::cout<<"s for scissors\n";
    std::cin>>player;

    }while(player != 'r' && player != 'p' && player !='s');

    return player;

    return 0;


}

char getComputer(){
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;


}

void showChoice(char choice){
    switch(choice){
        case 'r': std::cout<<"Rock\n";
        break;
        case 'p': std::cout<<"Paper\n";
        break;
        case 's': std::cout<<"Scissors\n";
        break;
    }

}

void winner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
            std::cout<<"Tie!\n";
        }else if(computer == 'p'){
            std::cout<<"You lose!\n";
        }else{
            std::cout<<"You win!\n";
        }
        break;


        case 'p': if(computer == 'r'){
            std::cout<<"You win!\n";
        }else if(computer == 'p'){
            std::cout<<"Tie!'n";
        }else{
            std::cout<<"You lose!\n";
        }
        break;

        case 's': if(computer == 'r'){
            std::cout<<"You lose!\n";
        }else if(computer == 'p'){
            std::cout<<"You win!'n";
        }else{
            std::cout<<"Tie!\n";
        }
        break;
    }


}
