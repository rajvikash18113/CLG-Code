// AIM: WAP TO DEMONSTRATE THE USE OF CLASS TEMPLATE.

#include<iostream>
using namespace std;
template<class t>
void compare(t a,t b)
{
t largest;
if(a>b)
{
largest=a;
}
else
largest=b;
cout<<"largest="<<largest;
}
int main()
{ int i,j;
cout<<"Enter the integer values: "<<endl;
cin>>i>>j;
compare(i,j);
float p,q;
cout<<endl;
cout<<"Enter the float values: "<<endl;
cin>>p>>q;
compare(p,q);
return 0;
}