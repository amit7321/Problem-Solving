#include<bits/stdc++.h>
using namespace std;

int main()
{

    double f1,f2,x0,f0,root,e,x,fr,x1,x2;
    bool notRange=false;

    while(notRange==false){

    cin>> x1 >> x2 >> e ;

    f1=(x1*x1)+x1-2;
    f2=(x2*x2)+x2-2;

    if(f1*f2<0){
       while((x2-x1)/2>e){
       x0=x1-(f1*((x2-x1)/(f2-f1)));
       f0=(x0*x0)-(4*x0)-10;
       if(f1*f0<0)
          x2=x0;
       else{
            x1=x0;

       }
       if(((x2-x1)/x2)<e){
        root=(x1+x2)/2;
        notRange=true;
        printf("One of the root is: %0.4f \n",root);
       }
       else
          continue;



       }

    }
    else{
        cout<<"There is no root with in this range"<<endl;
        notRange=false;
        continue;
        }

    }

    return 0;


}

