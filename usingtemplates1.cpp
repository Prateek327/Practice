
#include<iostream>
using namespace std;


template <typename T>
T add(T a , T b){
return a+b ;
}
int main(){
int a = 4;
int b = 5;
cout<<add<int>(a,b);
return 0 ;
}


