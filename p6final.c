#include <stdio.h>
#include <string.h>
 
int main()
{
  char str[] = "bbdbd jhsh ajj";
  char* token;
  char* rest = str;
  int n=0;
  while ((token = strtok_r(rest, " ", &rest)))
    n=n+1;
    return 0;
  printf("No.=%d",n);
  return 0;
}