//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;

    if(a>=0){
        cout<<"Number is positive";{
                    if(a%2==0){
                        cout<<"Number is even";
                    }
                    else{
                        cout<<"Number is odd";
                    }
        }
    }
    else{
        cout<<"number is negative";
        cout<<"enter a valid positive number to test even-odd";
    }
}

/*  SAMPLE OUTPUT 1
Enter a number:78
Number is positive
Number is even

SAMPLE OUTPUT 2
Enter a number:55
Number is positive
Number is odd

SAMPLE OUTPUT 3
Enter a number:-90
number is negative
enter a valid positive number to test even-odd
*/
