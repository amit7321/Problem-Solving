#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[5][5],c1=0,c2=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>> a[i][j] ;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                if(i==0 || i==4)
                    c1=2;
                if(i==1 || i==3)
                    c1=1;
                if(j==0 || j==4)
                    c2=2;
                if(j==1 || j==3)
                    c2=1;
            }

        }
    }

    cout<< c1+c2 ;


    return 0;


}



