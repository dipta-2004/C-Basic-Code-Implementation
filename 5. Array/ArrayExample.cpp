#include<iostream>
using namespace std;
#define N 7

int main(){
    int age[N]; // [] is called array notation

    //how to access array??
    //array_name[index]
    // indexing stats from 0 and ends at size-1
    for(int i=0;i<N;i++){
        cin>>age[i];
    }

    cout>>"Printing the Element of Array"<<endl;
    for(int i=0;i<N;i++){
        cout<<age[i]<<endl;
    }

    cout<<"Array in reverse order"<<endl;
    for(int i=N-1;i>=0;i--){
        cout<<age[i]<<endl;
    }


    //summation
    float sum=0;
    for(int i=0;i<N;i++){
        sum = sum + age[i];
    }
    cout<<"Summation of Array Elements : "<<sum<<endl;


    //finding maximum
    int maxValue;
    maxValue = age[0];
    for(int i=0;i<5;i++){
        if(maxValue < age[i])
        {
            //updating with new maximum
            maxValue = age[i];
        }
    }
    cout<<"Maximum of Array : "<<maxValue<<endl;

    return 0;

}
