#include<stdio.h>
int prime(int num)
{
    for(int i=2;i<(num-1);i++)
    {
        if(num%i==0)
        {
            for(int t=(i-1);t>1;t--)
            {
                    if (i%t==0)
                    {
                        goto label;
                    }
                    
            }
            printf("%d\n",i);
        }
        
    }
    label:
        return 0;
}
int main()
{   
    int num;
    scanf("%d",&num);
    prime(num);


    return 0;
}