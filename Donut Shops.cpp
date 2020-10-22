#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long tCase,a,b,c,x1,x2 ;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> a >> b >> c ;

        x1=b*a ;
        x2=(b-1)*a ;

        if(x1<=c && x2<=c)
            cout << b <<" "<< "-1" << "\n" ;
        else if(x1>=c && x2>=c || (a=b=c))
            cout << "-1" <<" "<< b << "\n" ;
        else if(x2<=c && x1>=c)
            cout << b-1 <<" "<< b << "\n" ;




    }

    return 0 ;
}
