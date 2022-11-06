#include<iostream>
#include <cstring>

using namespace std;

char data[20],dib[20],temp[4],total[100];
int i,j,datalen,divlen,len,flag=1;
void check(){
for(j=0;j<divlen;j++){
data[j]=total[j];

}
while(j<=len){

if(data[0]=='1')

for(i=1;i<divlen;i++)
data[i]=((data[i]==dib[i]) ? '0' : '1');

for(i=0;i<divlen-1;i++)

data[i]=data[i+1];
data[i]=total[j++];
}
}
int main(){

cout<<"enter the total bit of the data :- "<<endl;
cin>>datalen;
cout<<"enter the total bit of the divisor: -"<<endl;
cin>>divlen;

len= datalen+divlen-1;
cout<<"enter the data: -"<<endl;
cin>>data;

cout<<"enter the divisor: -"<<endl;
cin>>dib;

for(i=0;i<datalen;i++){

total[i]=data[i];
temp[i]=data[i];
}

for(i=datalen;i<len;i++){

total[i]='0';
check();
for(i=0;i<divlen;i++){

temp[i=datalen]=data[i];
}

cout<<"\n transmitted code word:- "<<temp<<endl;
cout<<"enter the recived code word: - "<<endl;
cin>>total;
check();

for(i=0;i<divlen-1;i++){
if(data[i]=='1'){
flag=0;
break;
}
if(flag==1)
cout<<"successfull";
else
cout<<"recived code word contains errors...."<<endl;
}

}

}
