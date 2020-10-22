#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long combination[7],brown[4],green[4],clears[4],i,minimum ;

    while(cin>> brown[0] >> green[0] >> clears[0] >> brown[1] >> green[1] >> clears[1] >> brown[2] >> green[2] >> clears[2]){

        combination[1]=brown[1]+brown[2]+green[0]+green[2]+clears[0]+clears[1];
        combination[0]=brown[1]+brown[2]+clears[0]+clears[2]+green[0]+green[1];
        combination[2]=clears[1]+clears[2]+brown[0]+brown[2]+green[0]+green[1];
        combination[3]=clears[1]+clears[2]+green[0]+green[2]+brown[0]+brown[1];
        combination[5]=green[1]+green[2]+clears[0]+clears[2]+brown[0]+brown[1];
        combination[4]=green[1]+green[2]+brown[0]+brown[2]+clears[0]+clears[1];

        minimum=combination[0];

        for(i=0;i<=6;i++){
            if(combination[i]<minimum)
                minimum=combination[i];
        }

        if(combination[0]==minimum){
            cout << "BCG " << minimum << "\n" ;
        }
        else if(combination[1]==minimum){
            cout << "BGC " << minimum << "\n" ;
        }
        else if(combination[2]==minimum){
            cout << "CBG " << minimum << "\n" ;
        }
        else if(combination[3]==minimum){
            cout << "CGB " << minimum << "\n" ;
        }
        else if(combination[4]==minimum){
            cout << "GBC " << minimum << "\n" ;
        }
        else if(combination[5]==minimum){
            cout << "GCB " << minimum << "\n" ;
        }

    }

    return 0 ;
}
