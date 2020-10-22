#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    float a,b,c;

    cin>> a ;
    cin>> b ;
    cin>> c ;


    cout<< "MEDIA = " << fixed << setprecision(1) << ((a*2)+(b*3)+(c*5))/(2+3+5) <<  endl ;

    return 0;
}
