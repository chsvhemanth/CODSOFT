/*tic tac toe game */
#include<iostream>
#include<vector>
using namespace std;
//the following function shows the game progress i.e the board

void displaygame(const vector<vector<char>>&board){
for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            cout<<board[i][j]<< " "<<"|";
        }
        cout<<endl;
    }
}
//the following function will check if player has won
int wincheck(const vector<vector<char>>&board,char player){
     for(int i=0;i<3;i++){
        if(board[i][0]==player&& board[i][1]==player&&board[i][2]==player)
            return 1;
        if(board[0][i]==player&& board[1][i]==player&&board[2][i]==player)
            return 1;
        if(board[0][0]==player&& board[1][1]==player&&board[2][2]==player)
            return 1;
        if(board[0][2]==player&& board[1][1]==player&&board[2][0]==player)
            return 1;
     }
return 0;
}





//the following functions check if game is drawn

int drawcheck(const vector<vector<char>>&board){
 for(int i =0;i<3;i++){
    for(int j =0;j<3;j++){
       if(board[i][j]!='x'&&board[i][j]!='o')
        return 0;
    }
 }
 return 1;
}



int main (){
    cout<<"welcome to the best TIC-TAC-TOE GAME"<<endl;
    int option,choice=1;
while(choice){
vector<vector<char>>board(3,vector<char>(3,' '));
char curplayer='x';
cout<<"and the game begins"<<endl;
while(1){
    displaygame(board);
    int row,col;
    cout<<"player  "<<curplayer<<"  enter your choice(row,col):"<<endl;
    cin>>row>>col;
    if(row<1 ||col<1 ||row>3||col>3|| board[row-1][col-1]!=' '){
        cout<<"invalid"<<endl;
        continue;
    }
    board[row-1][col-1]=curplayer;
    if(wincheck(board,curplayer)){
        displaygame(board);
        cout<<"player "<<curplayer<<" is the winner"<<endl;
        break;
    } else if (drawcheck(board)){
    displaygame(board);
    cout<<"the game is drawn"<<endl;
    break;
    }
    if(curplayer=='x')
        curplayer='o';
    else
        curplayer='x';
}
cout<<"do you want to play another game "<<endl;
cout<<"0-no or  any natural number -yes"<<endl;
cin>>option;
choice=option;

}

}
