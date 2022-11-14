gc#include <stdio.h>

int input_array_size()
{  int n;
  printf("Enter the numbers of variables you wish to find the sum of:\n");
  scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{
  printf("Enter the %d numbers you wish to find the sum of:\n",n);
  for(int i=0;i<n;i++)
    { 
    scanf("%d",&a[i]);
      }
}
int sum_n_array(int n, int b[n])
{ int sum=0, i;
  for(int i=0;i<n;i++)
    { sum = sum + b[i];}
     return sum;
}
void output(int n, int a[n],int sum)
{
  printf("The sum of the numbers of the array of size %d is %d\n",n,sum);
  }
int main()
{ int c;
  int sum;
  c = input_array_size ();
  int a[c];
	input_array(c,a);
   sum = sum_n_array(c,a);
	output(c,a,sum);
	return 0;
}