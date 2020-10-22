#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,x,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,temp=0,result=0;

    while(t--){
        cin>> x ;
        c1=x/7;
        temp=x%7;
        if(temp%2==0)
            c2=temp/2;
        else if(temp%3==0)
            c3=temp/3;
        else if(temp%4==0)
            c4=temp/4;
        else if(temp%5==0)
            c5=temp/5;
        else if(temp%6==0)
            c6=temp/6;

        result=c1+c2+c3+c4+c5+c6;
        cout<< result <<"\n";
        result=0;
        c1=0;
        c2=0;
        c3=0;
        c4=0;
        c5=0;
        c6=0;

        return 0;

    }
}
