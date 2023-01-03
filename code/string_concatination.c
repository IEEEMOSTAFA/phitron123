
#include<stdio.h>
#include<string.h>
string_concat()
{
    int i,j,k,len=0;
    char s1[50]="programming ";
    char s2[]="is ";
    char s3[]="fun";
    for(i=0;s1[i]!=0;i++)
    {
        len++;
    }
    for(j=0;s2[j]!=0;j++)
    {
      s1[len+j]=s2[j];
    }
    for(k=0;s3[k]!=0;k++)
    {
      s1[len+j+k]=s3[k];
    }

    printf("%s",s1);


}
int main()
{
    string_concat();
}
