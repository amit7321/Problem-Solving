#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,a,b,c,i=0;

    cin>> t ;


    while(t--){
        cin>> a >> b >> c;

       int x=min(min(a,b),c);
       int y=max(max(a,b),c);

       if(a>x && a<y)
           cout<< "Case " << ++i <<": "<< a <<"\n" ;
       else if(b>x && b<y)
           cout<< "Case " << ++i <<": "<< b <<"\n" ;
       else if(c>x && c<y)
           cout<< "Case " << ++i <<": "<< c <<"\n" ;
    }

    return 0 ;
}
