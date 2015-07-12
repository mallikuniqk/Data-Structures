#include<stdio.h>
void print_array(int in1,int in2,int arr[])
{
 int i;
     for(i=in1;i<=in2;i++)
     printf("\t %d",arr[i]);
}
int main()
{
  int i,n,arr[100],max_ending_here=0,max_so_far=0,in1,in2;
  printf("Enter number of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  in1=in2=0;
  for(i=0;i<n;i++)
  {
    max_ending_here=max_ending_here+arr[i];
    if(max_ending_here<0)
    {
    in1=i+1;
    max_ending_here=0;
   }
    if(max_so_far<max_ending_here)
    {
     in2=i;
     max_so_far=max_ending_here;
   }
}
printf("\n %d",max_so_far);
print_array(in1,in2,arr);
return 0;
}

