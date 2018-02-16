#include<iostream>
using namespace std;

int main(){
string s = "Hello";
int a[10] = {1,2,3,4,5,6,7};
display(a,s);
return 0 ;
}

void display(int a[],string s)
{
cout<<s;
int i ;
for(i=0;i<sizeof(a);i++)
{
cout<<a[i];
}
}
