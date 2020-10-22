#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,segment;

    cin >> t ;

    while(t--){
        cin>> segment ;

        int x=segment/2 ;

        if(segment%2==0){
            for(int i=0;i<x;i++){
               cout<< "1" ;
            }
            cout<< "\n" ;
        }
        else{
            cout<< "7" ;
            for(int i=0;i<(x-1);i++){
                cout<< "1" ;
            }
            cout<<"\n" ;
        }


    }

    return 0 ;
}
