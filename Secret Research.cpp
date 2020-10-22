#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1;
    int t;

    cin>> t ;

    while(t--){
        cin>> s1 ;
        int l=s1.size();

            if(s1=="4" || s1=="78" || s1=="1")
                       cout<<"+\n";
            else if(s1[l-1]=='5' && s1[l-2]=='3')
                cout<<"-\n" ;
            else if(s1[0]=='9' && s1[l-1]=='4' )
                cout<<"*\n" ;
            else
                cout<<"?\n" ;
    }
}
