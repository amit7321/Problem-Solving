#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,c1=0,c2=0,n,k; bool b1=false; bool b2=false;

    cin>> t ;

    while(t--){
        cin>> n >> k ;


        if((c1+c2)<=n){
            b1=false;
            c1=c2+k;
            b1=true;

        }
        b2=false;
        if((c1+c2)<=n){
            c2=c1+k;
            b2=true;
        }


        if(b1==false)
            cout<<"Bob"<<"\n";
        else
            cout<<"Alice"<<"\n";



    }

    return 0;
}
