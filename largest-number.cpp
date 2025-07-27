//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    
    if (a>b && a>c){
        cout<<a<<" is the largest number";
    }
    else if(b>a && b>c){
        cout<<b<<" is the largest number";
    }
    else cout<<c<<" is the largest number";
}

/*  OUTPUT 
Enter first number: 23
Enter second number: 67
Enter third number: 197
197 is the largest number
*/
