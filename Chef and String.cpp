#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int tCase,n,counts ;
    bool pairs ;

    cin >> tCase ;

    while(tCase--)
    {
        cin >> s ;

        n=s.size() ;
        pairs=false ;
        counts=0 ;

        for(int i=0;i<n-1;i++)
        {
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x') )
            {
                counts++ ;
                pairs=true ;

                if(pairs==true && i!=n)
                {
                    i++ ;
                }
            }

        }

        cout << counts << "\n" ;

    }

    return 0 ;
}
