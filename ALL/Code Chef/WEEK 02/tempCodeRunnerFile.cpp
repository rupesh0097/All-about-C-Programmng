#include<iostream>
#define MAX 50
using namespace std;
class guest{
public:
char name[50];
int seatno;
};

class hall{
public:
static int front,rear;
static guest allguest[MAX];
static int alloteseat(){
if(rear == (MAX-1)){
cout<<"Hall is full!";
return 0;
}
rear++;
cout<<"Enter guest name: ";
cin>>allguest[rear].name;
allguest[rear].seatno=rear +1;
return 1;
}
static void listguest(){
while(++front <=rear){
cout<<"\nguest "<<allguest[front].name<<"is seated on seats"<<allguest[front].seatno<<".";
}
rear = front =-1;
}
};

int hall::front =-1;
int hall::rear =-1;
guest hall::allguest[MAX]={};

int main(){
hall::alloteseat();
hall::alloteseat();
hall::alloteseat();
hall::alloteseat();
hall::listguest();
}
