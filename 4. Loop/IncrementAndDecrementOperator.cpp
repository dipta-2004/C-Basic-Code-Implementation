#include<iostream>
using namespace std;

int main(){

    int n=0;
    cout<<  n <<endl;
    cout << n++ <<endl;// n++ here ++ is used after variable that is known as post increment
                       // n++ means n = n+1;
                       //incrementation is done after the statement is executed

    cout << (++(++n))++ <<endl;// ++n here ++ is used before variable that is known as pre increment
                   // ++n means n = n+1;
                   //incrementation is done before the statement is executed
    cout<< --n <<endl;
    cout<< n-- <<endl;
    cout<< n <<endl;
return 0;
}

