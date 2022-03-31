#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter The Numerator 1: ");
  scanf("%d",num1);
  printf("Enter The Denominator 1: ");
  scanf("%d",den1);
  printf("Enter The Numerator 2: ");
  scanf("%d",num2);
  printf("Enter The Denominator 2: ");
  scanf("%d",den2);
}
void add(int num1, int den1, int num2, int den2, int *num3, int *den3)
{
  *den3=den1*den2;
  *num3=(den2*num1)+(den1*num2);
}
void output( int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("The Sum Of %d/%d + %d/%d Is=%d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1, &num2, &den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}