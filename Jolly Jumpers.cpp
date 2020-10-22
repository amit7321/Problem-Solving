#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[3001],b[3001];
    int n ;

    while(cin>> n) {

        bool jolly=true;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

       for(int i=0;i<n;i++){
            cin>> a[i];
     }

     if(n==1){
        cout<< "Jolly\n";
        continue;
     }

    for(int i=0;i<n-1;i++){
        b[i]=abs(a[i+1]-a[i]);
    }

    int m=n-1;
    sort(b,b+m);

    if(b[0]!=1){
        jolly=false;
    }

    for(int i=0;i<m-1 && jolly;i++){

        if((b[i+1]-b[i])!=1){
             jolly=false;
             break;
        }

    }

    if(jolly==true)
        cout<<"Jolly"<<"\n" ;
    else
        cout<<"Not jolly"<<"\n" ;


    }

    return 0 ;
}
