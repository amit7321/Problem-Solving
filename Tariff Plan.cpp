#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,n;
    int a[100000];

    cin>> t ;

    for(int i=0;i<t;i++){
        cin>> n ;

        int s1=0,s2=0 ;

        for(int j=0;j<n;j++){
            cin>> a[j] ;
        }

        for(int m=0;m<n;m++){
            s1=s1+(((a[m]/30)+1)*10) ;
            s2=s2+(((a[m]/60)+1)*15) ;
        }

        if(s1<s2){
            cout<< "Case " << i+1 << ": Mile " << s1 <<"\n" ;
        }
        else if(s2<s1){
            cout<< "Case " << i+1 << ": Juice " << s2 <<"\n" ;
        }
        else if(s1==s2){
            cout<< "Case " << i+1 << ": Mile Juice " << s2 <<"\n" ;
        }


    }

    return 0 ;
}
