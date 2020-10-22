#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ;
    int n ;

    cin>> t ;

    while(t--){
        cin>> n ;

        int a[n];
        bool same=false;

        for(int i=0;i<n;i++){
            cin>> a[i] ;
        }

        for(int i=0;i<n;i++){
            if(a[i]==a[0])
                same=true;
            else
                same=false;
        }

        if(same==true){
            cout<<"1"<<"\n" ;
        }

        else{
            float sum=accumulate(a,a+n,0);
            float mean=sum/n;
            bool temp=false;

         for(int i=0;i<n;i++){
            if(((sum-a[i])/(n-1))==mean){
                cout<< i+1 <<"\n";
                temp=true;
                break;
            }
        }

        if(temp==false)
            cout<<"Impossible"<<"\n" ;
        }

    }

    return 0;
}
