// 0 + 1 + 2 + 3 +4 + ......+ N = ?

#include<iostream>
using namespace std;

int main(){


    int number;
    int i;
    cin>>number;
    int sum=0;
    i=0;
    // while (condition){ body }
    while(i<=number){
        sum = sum + i;
        i++;
    }

    cout<<number<<"th Triangular Number : "<<sum<<endl;

return 0;
}

