#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);


    int t;

    while(cin>> t){

        int h,k,x,y,X,Y;
        cin>> h >> k ;

        while(t--){
            cin>> x >> y ;

            X=x-(h);
            Y=y-(k);

            if(X==0 || Y==0)
                cout<<"divisa" <<"\n" ;
            else if(X>0 && Y>0)
                cout<<"NE" <<"\n";
            else if(X>0 && Y<0)
                cout<<"SE" <<"\n";
            else if(X<0 && Y>0)
                cout<<"NO" <<"\n";
            else if(X<0 && Y<0)
                cout<<"SO" <<"\n";
        }

    }

    return 0;

}
