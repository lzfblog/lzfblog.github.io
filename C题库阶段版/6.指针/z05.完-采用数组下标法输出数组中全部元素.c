/*假设有一个数组a，整型，有5个元素，通过键盘输入数组各元素，要输出数组各元素的值。
要求：采用数组下标法，如a[i]形式输出数组各元素*/

#include <stdio.h>
int main()
 {
    int a[5];
    int i;
     printf("please enter 5 integer numbers:");
       for(i=0;i<5;i++)
	scanf("%d",&a[i]);
     printf("Output:\n");
     for(i=0;i<5;i++)
	printf("%d ",a[i]);
       printf("\n");
    return 0;
 }

