#include<stdio.h>
void func(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d , %d is %d\n",i,j,array[i][j]);
        }
        
    }
    
}
int main()
{
    int arr[2][2]=  {{1,2},
                    {3,4}};

         func(arr);


    return 0;
}