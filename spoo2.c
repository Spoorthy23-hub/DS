#include<stdio.h>
int main()
{
int n,i,j;
printf("size of an array");
int arr[6]={10,5,9,18,20,66};
int largest=arr[0];
int second = arr[0];
  for (int i=1;i<n;i++)
  {
   if(arr[i]>largest)
       largest=arr[i];
  }
  for (int j=1;j<n;j++)
  {
    if (arr[i]>second&&arr[j]!=largest)
        second=arr[j];
  }
   printf("the second largest element = %d \n", second );
 return 0;
}      
       
  

