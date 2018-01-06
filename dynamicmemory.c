#include <conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
int n , *ptr , *p,i,sum=0;
printf("enter the number of elements");
scanf("%d",&n);
ptr = (int*)calloc(n,sizeof(int));
p = ptr;
if (ptr==NULL){
printf("Insufficient Memory");
exit(0);}
printf("Enter %d elements",n);
for(i=1;i<=n;i++)
{
scanf("%d",ptr);
sum = sum+*ptr;
ptr++;
}
printf("elements are \n ");
for (i=1;i<=n;i++)
{
printf("%d \n",*p);
p++;
}
printf("the sum is %d",sum);
free(ptr);
}
