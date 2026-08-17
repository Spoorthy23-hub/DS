#include<stdio.h>
int main()
{
char str[]="abcdefghia";
int seen[256]={0};

  for (int i = 0; str[i] != '\0'; i++){
      if(seen[(unsigned char)str[i]]++){
     printf("most repeated character: '%c'\n", str[i]);
     return 0;
    }
  }
    printf(" most repeated character found .\n");
    return 0;
 }
