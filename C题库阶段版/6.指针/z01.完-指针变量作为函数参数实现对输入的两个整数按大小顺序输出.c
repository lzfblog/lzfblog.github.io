/*通过键盘输入两整型变量a和b，然后定义俩指针变量p1和p2指向整型变量a和b，
然后a和b之间相互比较，a若小于b，则p1和p2相互交换，然后按照先大到小顺序
输出p1和p2所指向的整型变量的值。
*/

#include <stdio.h>

/******start******/
void swap(int *p1,int *p2);
/******end******/

int main()
{
	  int a,b;
	  int *pointer_1,*pointer_2;
	  printf("please enter a and b:");
	  scanf("%d %d",&a,&b);
	  pointer_1=&a;
	  pointer_2=&b;
	  if(a<b) swap(pointer_1,pointer_2);
	  printf("Output:\nmax=%d,min=%d\n",a,b);
	  return 0;
 }    

/******start******/
void swap(int *p1,int *p2){
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
/******end******/
