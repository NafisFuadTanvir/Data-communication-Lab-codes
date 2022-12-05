#include<iostream>
using namespace std;
int main(){
    
    int data[10];
int dataatrec[10],c,c1,c2,c3,i;

cout<< "enter four bits of data one by one: - "<<endl ;
cin>>data[0]>>data[1]>>data[2]>>data[4];
data[6]=data[0]^data[2]^data[4];
data[5]=data[0]^data[1]^data[4];
data[3]=data[0]^data[1]^data[2];

cout<<"encoded data is: - ";
for(i=0;i<=7;i++){
    cout<<data[i];
}
cout<<endl;
cout<<"enter recived data bits one by one: -"<<endl;

    for(i=0;i<=7;i++){
    cin>>dataatrec[i];
}
c1=dataatrec[6]^dataatrec[4]^dataatrec[2]^dataatrec[0];
c2=dataatrec[5]^dataatrec[4]^dataatrec[1]^dataatrec[0];
c3=dataatrec[3]^dataatrec[2]^dataatrec[1]^dataatrec[0];
c=c3*4+c2*2+c1;
if(c==0){
    cout<<"no error while transmission of data :- ";
}
else{
    cout<<"error on position: -"<<c;
}

cout<<"data sent:- "<<endl;
for(i=0;i<=7;i++){
    cout<<data[i];
}
cout<<"data recived:- "<<endl;
   for(i=0;i<=7;i++){
    cout<<dataatrec[i];
}
cout<<endl<<"correct message is: -"<<endl;
if(dataatrec[7-c]==0)
dataatrec[7-c]=1;
else
dataatrec[7-c]=0;

   for(i=0;i<=7;i++){
    cout<<dataatrec[i];
}
   
}