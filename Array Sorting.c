#include<stdio.h>
int main()
{
    int array[100],i,j,size,temp;
    printf("Enter An Array Size:\n");
    scanf("%d",&size);
    printf("Enter Array Elements:\n");
    for(i=0;i<size;i++)
    {
        printf("Array [%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("Result After Sorting:\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[j]<array[i])
            {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("Array [%d] = %d\n",i,array[i]);
    }
    return 0;
}
