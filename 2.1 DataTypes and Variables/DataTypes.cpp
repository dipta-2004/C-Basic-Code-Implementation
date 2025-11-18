#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int i;
    float f;
    double d;
    bool b;
    char c;

    i=3.14159265358979323846;
    f=3.14159265358979323846f;
    d=3.14159265358979323846d;
    b=true;
    c=65;

    cout<<"DIFFERENT TYPES OF VARIABLE"<<endl;

    cout<<"Integer : "<< i <<endl;
    cout<<"Float : "<< setprecision(7) << f <<endl;
    cout<<"Double : "<< setprecision(15) << d <<endl;
    cout<<"Boolean : "<< b <<endl;
    cout<<"Character : "<< c <<endl;

return 0;
}
