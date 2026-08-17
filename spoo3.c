#include<stdio.h>
int main()
{
char str[]="abcdefgabe";
int seen[256]={0};

  for (int i = 0; str[i] != '\0'; i++){
      if(seen[(unsigned char)str[i]]++){
     printf(" last repeated character: '%c'\n", str[i]);
     }
    }
      return 0;
     printf(" no repeated character found.\n");
     return 0;
 }
