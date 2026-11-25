#include<stdio.h>
int main()
{
    int a,b;
    printf("enter number a,b");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("the smallest number is %d",a);
    }
    else if(a>b)
    {

        printf("the smallest number is %d",b);
    }
    else
    {
        printf("both numbers are equal");
    }


    
return 0;

}