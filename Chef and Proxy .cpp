#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    float d,temp=0.0,present=0.0;
    string s;

    cin>> t ;


    while(t--){
        cin>> d ;
        cin>> s ;

        for(int i=0;i<d;i++){
            if(s[i]=='P')
                present++;
        }

        cout<< present << endl;

        temp=present;

        for(int i=0;i<d;i++){
            if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
                temp++;
            if((temp/d)>=.75)
                break;
            else
                continue;

        }

        cout<< temp << endl ;

        if(temp<.75)
            cout<<"-1" ;
        else
            cout<<(temp-present);

    }

    return 0 ;


}
