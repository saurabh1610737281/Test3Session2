#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter The numerator of the first Fraction: ");
  scanf("%d", num1);
  printf("Enter The denominator of the Second Fraction: ");
  scanf("%d", den1);
  printf("Enter the Numerator of the second Fraction: ");
  scanf("%d", num2);
  printf("Enter the denominator of the second Fraction: ");
  scanf("%d", den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int n1, n2,n4,d4;
  *den3= den1*den2;
  *num3 = ((*den3/den1)*num1+ (*den3/den2)*num2);
  int gcd=1;
  for(int i=2;i<=*num3 && i<=*den3;i++)
  {
    if(*num3%i==0 && *den3%i==0)
    {
      gcd=i;
    }
  }
  n4=*num3/gcd;
  d4=*den3/gcd;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  int n4,d4;
  printf("The Sum of %d/%d + %d/%d = %d/%d\n", num1,den1,num2,den2,n4,d4);
}
int main()
{
  int num1,num2,den1,den2,num3,den3;
  input(&num1, &den1, &num2, &den2);
  add(num1,den1,num2,den2, &num3, &den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}