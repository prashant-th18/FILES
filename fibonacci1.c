#include<stdio.h>
int fib(int num)
{
    if (num==1||num==2)
        {
            return num-1;
        }
        else
        {
            return (fib(num-1) + fib(num-2));

        }
        
}
int main()
{   
        int i,num;
        printf("Enter no of terms you want to see\n");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
                printf("\n%d\n",fib(i));
        }
        


    return 0;
}