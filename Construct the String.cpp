#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a,b,tCase,j,i;
    string s ;

    cin >> tCase ;

    while(tCase--){
        cin >> n >> a >> b ;
        j=0;
        for(i=0;i<a;i++){
            s[i]=(char)(97+j) ;
            j++;
            if(j>b)
                j=0;
        }
        for(int k=i;i<(n-a);k++){
            s[k]=(char)(97+j) ;
            j++;
            if(j>b)
                j=0;
        }

        cout << s << "\n" ;


    }


    return 0 ;
}
