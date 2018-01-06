#include<stdio.h>
#include<string.h>
int main(){
int k,l,m,count = 0 ,i;
char s[50];
printf("enter the string:");
scanf("%s",&s);
m = strlen(s);
int a[m];
for(i=0;i<m;i++){
a[i]=1;}
for(k=0;k<m;k++)
{
    count = 0;
    if (a[k]==0){continue;}

    for(l=0;l<m;l++)
    {
     if (s[l]==s[k]){
     count++  ;
     a[l]=0;
    }}
    printf("Count of letter %c is %d \n",s[k],count);
}
return 0 ;
}
