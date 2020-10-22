#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s,s1,s2,s3,s4,s5;
    int i,t=5;
    bool match=false;

    cin>> s >> s1 >> s2 >> s3 >> s4 >> s5 ;

        for(i=0;i<2;i++){
            if(s1[i]==s[i] || s2[i]==s[i] || s3[i]==s[i] || s4[i]==s[i] || s5[i]==s[i])
                match=true;
        }


    if(match==true)
        cout<< "YES" ;
    else
        cout<< "NO" ;


    return 0 ;

}
