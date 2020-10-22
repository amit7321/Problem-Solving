#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,s,w1,w2,w3 ;;

    cin>> t ;

    while(t--){
            cin>> s >> w1 >> w2 >> w3 ;

        if(w1+w2+w3<=s)
           cout<< "1\n" ;
        else if((w1+w2<=s) || (w2+w3<=s))
            cout<< "2\n" ;
        else
            cout<< "3\n" ;


    }

    return 0;
}
