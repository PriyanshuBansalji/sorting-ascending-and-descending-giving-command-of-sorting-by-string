#include<stdio.h>
#include<string.h>
int asc(int array[100] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
int dec(int array[100] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]<array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

int main()
{
    int n,i;
    int arr[100];
    printf("enter the number : ");
    scanf("%d",&n);
    printf("elemenets : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     int array[100];
    for(int i=0;i<n;i++)
    {
        array[i]=arr[i];
    }
        char order[20];
    printf("Enter sorting order (\"ascending\" or \"descending\"): ");
    scanf("%s", order);
    if(strcmp(order,"ascending")==0){
        printf("thanks for choosing ascending order \n");
        printf("original array is : ");
        asc(array,n);
        for(int i=0;i<n;i++)
        {
        printf("%d ",arr[i]);
        }
        printf("sorted array is : ");
        for(int i=0;i<n;i++)
        {
            printf("%d ",array[i]);
        }
    }
    else
    {
        printf("thanks for choosing descending order \n");
        dec(array,n);
         printf("original array is : ");
        for(int i=0;i<n;i++)
        {
        printf("%d ",arr[i]);
        }
         printf("\nsorted array is : ");
        for(int i=0;i<n;i++)
        {
            printf("%d ",array[i]);
        }

    }
   return 0;
}