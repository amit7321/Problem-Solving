#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int distance1=0,n,k,capital1,capital2,distance2=0,p,m,j;

    cin>> n >> k ;

    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>> b[i] ;
    }

    for(int i=0;i<n;i++){
        a[i]=b[i] ;
    }

    sort(a,a+n);

    if(n%2!=0){
        capital1=ceil(n/2);
    }
    else{
        capital1=n/2;
        capital2=(n/2)+1;
    }

    if(n%2!=0){
    for(int i=0;i<n;i++){
        if(a[i]<a[capital1]){
            if((a[capital1]-a[i])<k)
                continue;

        else
            distance1 +=a[capital1]-(a[i]+k);
        }

        if(a[i]>a[capital1]){
           if((a[i]-a[capital1])<k)
                continue;

        else
            distance1 +=(a[i]-k)-a[capital1];
        }


     }

    for(j=0;j<n;j++){
        if(b[j]==a[capital1])
            break;
    }
    cout<< j+1 <<" "<< distance1 ;

    }

    else{

        for(int i=0;i<n;i++){
           if(a[i]<a[capital1]){
              if((a[capital1]-a[i])<k)
                 continue;

           else
               distance1 +=a[capital1]-(a[i]+k);
        }

        if(a[i]>a[capital1]){
           if((a[i]-a[capital1])<k)
                continue;

        else
            distance1 +=(a[i]-k)-a[capital1];
        }


     }

     for(m=0;m<n;m++){
        if(b[m]==a[capital1])
            break;
     }

     for(int i=0;i<n;i++){
           if(a[i]<a[capital2]){
              if((a[capital2]-a[i])<k)
                 continue;

           else
               distance2 +=a[capital2]-(a[i]+k);
        }

        if(a[i]>a[capital2]){
           if((a[i]-a[capital2])<k)
                continue;

        else
            distance2 +=(a[i]-k)-a[capital2];
        }


     }

     for(p=0;p<n;p++){
        if(b[p]==a[capital2])
            break;
    }


    if(distance1>distance2)
           cout << p+1 <<" "<< distance2;
    else
        cout<< m+1 <<" "<< distance1;

  }






}
