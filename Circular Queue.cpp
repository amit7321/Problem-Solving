#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int Rear,Front,Size;
    int *arr;

    Queue(int s)
    {
        Rear=Front==-1;
        Size=s;
        arr=new int[s];
    }

    void enQueue(int data);
    int deQueue();
    void displayQueue();
};

void Queue::enQueue(int data)
{
    if((Front=0 && Rear==Size-1)|| (Rear==(Front-1)%(Size-1))){
        cout<< "Queue is empty"<< "\n" ;
        return;

    }
    else if(Front=-1){
        Front=Rear=0;
        arr[Rear]=data;
    }
    else if(Rear==Size-1 && Front!=0){
        Rear=0;
        arr[Rear]=data;
    }
    else{
        Rear++;
        arr[Rear]=data;
    }

}

int Queue::deQueue()
{
    if(Front=-1){
        cout<<"Queue is empty"<<"\n";
        return INT_MIN;
    }
    int data=arr[Front];
    arr[Front]=-1;
    if(Front==Rear){
        Rear=-1;
        Front=-1;
    }
    else if(Front=Size-1){
        Front=0;
    }
    else
        Front++;

    return data;


}

void Queue::displayQueue()
{
    if(Front=-1){
        cout<<"Queue is empty"<<"\n";
        return;
    }
    cout<<"The elements of queue are: "<<"\n";
    if(Rear>=Front){

        for(int i=Front;i<=Rear;i++){
            cout<< arr[i];
        }
    }
    else{
        for(int i=Front;i<Size;i++)
            cout<< arr[i];

         for(int i=0;i<=Rear;i++)
            cout<< arr[i];

    }
}


int main()
{
    Queue q(5);


    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);


    q.displayQueue();


    printf("\nDeleted value = %d", q.deQueue());
    printf("\nDeleted value = %d", q.deQueue());

    q.displayQueue();

    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);

    q.displayQueue();

    q.enQueue(20);
    return 0;
}
