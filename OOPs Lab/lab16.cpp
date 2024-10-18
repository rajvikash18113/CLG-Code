//  AIM: WAP TO DEMONSTRATE THE EXCEPTION HANDLING.


#include<iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"Enter the values: "<<endl;
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
c=a-b;
try
{
if(c!=0)
{cout<<"The result of a-b is= "<<c<<endl;
}
else
{
throw(c);
}}
catch (int x)
{
cout<<"Exeption has occured "<<c;
}
return 0;
}