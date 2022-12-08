#include <iostream>
using namespace std;


int convertFunction(int n){
    
    int rem,i=1,binary=0;
    while(n!=0){
        rem=n%2;
        n=n/2;
        binary= binary+rem*i;
        i=i*10;
    }
    
    return binary;
    
}
  
int main() {
    int a,b,c,d;
    char dot='.';
    cout<<"enter the four ipv4 dotted decimal numbers for converting into 32 bit binary ip:-- "<<endl;
    cin>>a>>dot>>b>>dot>>c>>dot>>d;
    int binaryOfa=convertFunction(a);
    int binaryOfb=convertFunction(b);
    int binaryOfc=convertFunction(c);
    int binaryOfd=convertFunction(d);
    
    
    cout<<endl<<"The binary form of this ipv4 dotted decimals numbers are:-"<<endl<<endl<<binaryOfa<<""<<dot<<binaryOfb<<""<<dot<<binaryOfc<<""<<dot<<binaryOfd;
  

    return 0;
}