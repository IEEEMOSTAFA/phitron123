#include<stdio.h>
assend_function()
{
    int i,j,arr1[10],temp;
    int n;
    printf("Enter the range of Array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element-%d\n",i);
        scanf("%d",&arr1[i]);

    }
     for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(arr1[i]>arr1[j])
          {
              temp=arr1[i];
              arr1[i]=arr1[j];
              arr1[j]=temp;
          }
      }

    }
    for(i=0;i<n;i++)
    {
      printf("%d\t",arr1[i]);

    }


}
int main()
{
    assend_function();
    return 0;
}
