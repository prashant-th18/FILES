#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}


int main()
{
    int num;
    scanf("%d",&num);
    int array[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\n");
    if(num%2==0)
    {

    
    for(int i=0;i<num/2;i++)
    {
    swap((array+i),(array+num-1-i));

    }
    
    }
    else
    {
        for(int i=0;i<(num/2);i++)
    {
    swap((array+i),(array+num-1-i));

    }
    
    }
    
    for (int i = 0; i < num; i++)
    {
        printf("%d  ",array[i]);
    }

    return 0;
}