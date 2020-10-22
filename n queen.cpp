#include <bits/stdc++.h>
using namespace std ;


int  N;
int board[100][100];

int isAttack(int i,int j)
{
    int k,l;

    for(k=0;k<N;k++){

        if((board[i][k] == 1) || (board[k][j] == 1))
            return 1;
    }

    for(k=0;k<N;k++){
        for(l=0;l<N;l++){
            if(((k+l) == (i+j)) || ((k-l) == (i-j))){
                if(board[k][l] == 1)
                    return 1;
            }
        }
    }
    return 0;
}

int NQueen(int n)
{
    int i,j;

    if(n==0)
        return 1;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){

            if((!isAttack(i,j)) && (board[i][j]!=1)){
                board[i][j] = 1;

                if(NQueen(n-1)==1){
                    return 1;
                }
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

int main()
{

    cout << "Enter the value of N for NxN chessboard\n" ;
    cin>> N ;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            board[i][j]=0;
        }
    }

    NQueen(N);

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<< "\t" << board[i][j] ;
        cout << "\n" ;
    }

    return 0 ;

}
