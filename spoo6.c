#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50};
  for (int i = 0; i < 5; i++) {
      printf("%d", arr[i]);
if(arr[i] == 30)
{
printf("found at index %d", i);
break;
}
}
return 0;
}

