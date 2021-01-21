#include<stdio.h>
#define size 20
int main()
{
  int n,loop,arr[size];
  scanf("%d",&n);
  for(loop=0;loop<n;loop++)
  {
   scanf("%d",&arr[loop]);
  }
 printf("{%d,",arr[0]);
 for(loop=1;loop<n;loop++)
 {
    if(arr[loop]>arr[loop-1] && arr[loop]>arr[0])
      printf("%d,",arr[loop]);
 }
 printf("\b}\n");
}
