#include <iostream>
#include<math.h>
using namespace std;

int ipv4ToDecimal(long long n){
    int decimal = 0, i = 0, rem;
    
    while(n!=0){
        rem=n%10;
        n=n/10;
        decimal=decimal+rem*pow(2,i);
        i++;
        }
    
    return decimal;
    
    
}

int main() {
   long long a,b,c,d;
   char dot='.';
   cout<<"enter the ipv4 binary numbers:--";
   cin>>a>>b>>c>>d;
   
 int decimalOfa=ipv4ToDecimal(a);
 int decimalOfb=ipv4ToDecimal(b);  
 int decimalOfc=ipv4ToDecimal(c);
 int decimalOfd=ipv4ToDecimal(d);
      
   cout<<"the dotted decimal numbers of the given ipv4 binary number is:--"<<endl<<decimalOfa<<""<<dot<<decimalOfb<<""<<dot<<decimalOfc<<""<<dot<<decimalOfd;

    return 0;
}