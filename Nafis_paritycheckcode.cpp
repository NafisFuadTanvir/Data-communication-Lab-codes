#include <iostream>
using namespace std;
int main() {
    char data[100];
    
    cout<<"this program is for even parity cheking"<<endl;
    cout<<"enter the data: -"<<endl;
    cin>>data;
    int length= sizeof(data);
    
    int count=0;
    for(int i=0;i<length;i++){
        if(data[i]=='1'){
            count++;
        }
    }
    
    int c=length+1;
    if(count%2==0){
        for(int i=c,j=c-1;i>0;i--,j--){
            data[i]=data[j];
        }
        data[0]= '0';
    cout<<"after adding  '0' at the front of the data "<<endl;
    cout<<data<<endl;
    }
    else{
        for(int i=c,j=c-1;i>0;i--,j--){
            data[i]=data[j];
            
        }
        data[0]='1';
        
        cout<<"after adding '1' at the front of the data: "<<endl;
        cout<<data<<endl;
    }
     return 0;
}
