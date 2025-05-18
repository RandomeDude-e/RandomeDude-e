//I learned a bit more, so i added new things to TTT game
//1 - You can play with bot or your friend
//2 - i learned pseudo-random
//3 - enjoy

#include<iostream>
#include<ctime>

char board[3][3] = {
    {' ',' ', ' '},
    {' ',' ', ' '},
    {' ',' ', ' '}
};

void displayBoard(char board[3][3]);
void computerMove(char board[3][3]);
bool isValid(char board[3][3], int row, int col);
bool isWin(char board[3][3], char player);
bool isTie(char board[3][3]);



int main(){

char choice;
int op;
srand(time(NULL));

std::cout<<"Welcome to Tic-Tac-Toe game!1-pve 2-pvp\n";
std::cin>>op;

switch(op){
    case 1:
    do{
    for(int i =0;i<3;i++){
            for(int j = 0;j<3;j++){
                board[i][j] = ' ';
            }
        }

    char player = 'X';

    while(true){
        
    displayBoard(board);
    int row;
    int col;

    std::cout<<"Player "<<player<<"Enter row and column(0-2)\n";
    std::cin>>row>>col;

    if(!isValid(board,row,col)){
        std::cout<<"Invalid Move...Try again\n";
        continue;
    }
    board[row][col] = player;

    if(isWin(board,player)){
        displayBoard(board);
        std::cout<<"You win!\n";
        
         break;
    }

    if(isTie(board)){
        displayBoard(board);
        std::cout<<"It`s a tie!\n";
        
         break;

    }

    computerMove(board);

    if(isWin(board,'O')){
        displayBoard(board);
        std::cout<<"Computer Win!\n";
        
         break;
    }

    if(isTie(board)){
        displayBoard(board);
        std::cout<<"It`s a tie!\n";
        
        break;

    }


}

std::cout<<"do you want to play again?\n";
std::cin>>choice;


}while(choice == 'y' || choice == 'Y');
break;
   

    case 2:
    do{
    for(int i =0;i<3;i++){
            for(int j = 0;j<3;j++){
                board[i][j] = ' ';
            }
        }
        char player = 'X';
        while(true){
            displayBoard(board);

            int row;
            int col;

            std::cout<<"Player "<<player<<" enter row and col(0-2)\n";
            std::cin>>row>>col;
            std::cin.clear();


            if(!isValid(board, row, col)){
                std::cout<<"Invalid Move...try again\n";
                continue;
            }
            board[row][col] = player;

            if(isWin(board,player)){
                displayBoard(board);
                std::cout<<player<<" win!";
                break;
            }
            if(isTie(board)){
                displayBoard(board);
                std::cout<<"Tie!\n";
                break;
            }

            player = (player == 'X' ) ? 'O' : 'X';
        }
        std::cout<<"Do you want to play again?\n";
        std::cin>>choice;

    }
    while(choice == 'y' || choice == 'Y');
    break;
    
    default:std::cout<<"Invalid choice\n";
    break;

}


return 0;

}

void displayBoard(char board[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            std::cout<<board[i][j];
            if(j<2){
                std::cout<<"|";
            }
        }std::cout<<std::endl;
        if(i<2){
            std::cout<<"-------"<<std::endl;
        }
    }
}

bool isValid(char board[3][3], int row, int col){
    if(row < 0 || row > 2 || col < 0 || col > 2){
        return false;
    }
    if(board[row][col] != ' '){
        return false;
    }
return true;
}

void computerMove(char board[3][3]){
    int row;
    int col;
    do{
    row = rand() % 3;
    col = rand() % 3;
    

    }while(!isValid(board,row,col));
    
        board[row][col] = 'O';
        std::cout<<"Computer moved: "<<row<<" "<<col<<std::endl;;
    
}

bool isWin(char board[3][3], char player){
    for(int i = 0;i<3;i++){
        if(board[i][0] == player && board[i][1] == player && board[i][2] == player ){
            return true;
        }
    }
    for(int j = 0;j<3;j++){
        if(board[0][j] == player && board[1][j] == player && board[2][j] == player ){
            return true;
        }
    }

    if(board[0][0] == player && board[1][1] == player && board[2][2] == player ){
        return true;
    }
    if(board[0][2] == player && board[1][1] == player && board[2][0] == player ){
        return true;
    }
    return false;
}

bool isTie(char board[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(board[i][j] == ' '){
                return false;
            }
        }
    }return true;

}
