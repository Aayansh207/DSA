#include<bits/stdc++.h>
using namespace std;

bool possible(vector<vector<char>>& board,int row,int col,char target){
    int grid_r=(row/3)*3,grid_c=(col/3)*3;
    for(int i=0;i<9;i++){
        if(board[row][i]==target){return false;}
        if(board[i][col]==target){return false;}
        if(board[grid_r+i/3][grid_c+i%3]==target){return false;}
    }
    return true;
}
bool generate(vector<vector<char>>& board,int row,int col){
    while(row<9 && board[row][col]!='.'){
        col++;
        if(col==9){row++;col=0;}
    }
    if(row==9)return true;
    for(char i='1';i<='9';i++){
        if(possible(board,row,col,i)){
            board[row][col]=i;
            if(generate(board,row+col/8,(col+1)%9)) return true;;
            board[row][col]='.';
        }
    }
    return false;
}
int main(){
    vector<vector<char>> board;
    for(int i=0;i<9;i++){
        vector<char> curr;
        for(int j=0;j<9;j++){
            char n;
            cin>>n;
            curr.push_back(n);
        }
        board.push_back(curr);
    }
    generate(board,0,0);
    for(int row=0;row<9;row++){
        for (int col = 0; col < 9; col++){
            cout<<board[row][col];
        }
    }
    return 0;
}