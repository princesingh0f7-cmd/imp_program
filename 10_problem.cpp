#include<iostream>
using namespace std;
int main()
{
int num,a=0,b=1,c;
cout<<"ENTER A NUMBER:";
cin>>num;
cout<<"fabinnaci series till:"<<num<<"\n";
int sum=0;
for(int i=1;i<=num;i++){
    cout<<a<<"\n";
    sum+=a;
    c=a+b;
    a=b;
    b=c;
}
cout<<"sum till"<<" "<<num<<":"<<sum;
return 0;
}