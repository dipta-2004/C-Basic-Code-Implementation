#include<iostream>
using namespace std;

int main ()
{
    int number_to_test, remainder;

    cout<<"Enter your number to be tested: ";

    cin>>number_to_test;
    if(number_to_test>0){

        remainder = number_to_test%2;

        if(remainder == 0){
            cout<<number_to_test<<" is a EVEN number"<<endl;
        }
        else{
            cout<<number_to_test<<" is a ODD number"<<endl;
        }
    }
    else{
        cout<<"Given number is Negative"<<endl;
    }

return 0;
}

