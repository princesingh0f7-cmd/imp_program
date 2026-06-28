#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER:";
cin>>num;
if(num<2){
    cout<<"not prime";
    return 0;
}
for(int i=2;i<num;i++){
    if(num%i==0){
        cout<<"it is not prime";
        return 0;
    }
}
cout<<"it is prime";
return 0;
}