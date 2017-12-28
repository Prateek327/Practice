#include<stdio.h>

int fact(int a)
{
    static int k = 1;
    k = k*a ;
    a = a-1;
    if (a==0)
    {
        return k;
    }
    else
    {
      fact(a);
    }

}
int main()
{
    int a,takefact;
    printf("enter A : ");
    scanf("%d",&a);
    takefact = fact(a);
    printf("The factorial is: %d",takefact);
    return 0;
}
