#include<stdio.h>
seperate_odd_even()
{
    int i,j=0,k=0,arr1[10],arr2[10],arr3[10];
    int n;
    printf("Enter the range of Array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element-%d\n",i);
        scanf("%d",&arr1[i]);

    }
    //sort of array
    for(i=0;i<n;i++)
    {
        if(arr1[i]%2==0)
        {
            arr2[j]=arr1[i];
            j++;
        }
        else
        {
            arr3[k]=arr1[i];
            k++;
        }
    }
    //print the array
    for(i=0;i<j;i++)
    {
      printf("%d\t",arr2[i]);
    // printf("\n");
    }
    for(i=0;i<k;i++)
    {
      printf("%d\t",arr3[i]);
      // printf("\n");
    }
}
int main()
{
    seperate_odd_even();
    return 0;
}

