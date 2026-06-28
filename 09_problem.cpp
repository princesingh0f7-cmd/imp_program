#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER:";
cin>>num;
int a=0,b=1,c;
cout<<"FIBONACCI SERIES TILL:"<<num<<"\n";
for(int i=1;i<=num;i++){
    cout<<a<<"\n";
    c=a+b;
    a=b;
    b=c;
}
return 0;