# include <stdio.h>
int main()
{
    int a,b,i,lcm;
    printf("Enter two numbers \n ");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if(i%a ==0 && i%b==0)
        {
            lcm=i;
            break;
        }
       
    }
     printf("THE LCM OF %d and %d is:%d",a,b,lcm);
    return 0;
}