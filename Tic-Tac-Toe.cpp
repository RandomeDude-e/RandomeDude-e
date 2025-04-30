#include <iostream>


char board [3][3] = {
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
};


void displayBoard(char board[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            std::cout<<board[i][j];
            if(j<2){
                std::cout<<"|";
            }
        }std::cout<<std::endl;
        if(i<2){
            std::cout<<"-----"<<std::endl;
        }
    }
}

bool isValidmove(char board[3][3],int row,int col){
    if(row <0 || row>2||col<0||col>2){
        return false;
    }if(board[row][col] != ' '){
        return false;
    }
    return true;
}


bool isWinner(char board[3][3],char player){
    for(int i = 0;i<3;i++){
        if(board[i][0] == player && board[i][1] == player && board[i][2] == player){
            return true;
        }
    for(int j = 0;j<3;j++){
        if(board[0][j] == player && board [1][j] == player && board [2][j] == player){
            return true;
        }
    }
        if(board[0][0] == player && board [1][1] == player && board [2][2] == player){
            return true;
        }
        if(board[0][2] == player && board [1][1] == player && board [2][0] == player){
            return true;
        }

    }
    return false;
}

bool isDraw(char board[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(board[i][j] == ' '){
                return false;
            }
        }
    }return true;
}

int main(){
    char player = 'X';


    while(true){
        displayBoard(board);
        int row;
        int col;
        std::cout<<"Введите координаты:\n";
        std::cin>>row>>col;

        if(!isValidmove(board,row,col)){
            std::cout<<"Неправильные координаты либо клетка уже занаята другим игроком\n";
            continue;

        }

        board[row][col] = player;

        if(isWinner(board,player)){
            displayBoard(board);
            std::cout<<"Игрок "<<player<<" победил!\n";
            break;
        }
        if(isDraw(board)){
            displayBoard(board);
                std::cout<<"Ничья!\n";
                break;
            
        }
        if(player == 'X'){
            player = 'O';
        }else{
            player = 'X';
        }
        
    }
    return 0;

}
