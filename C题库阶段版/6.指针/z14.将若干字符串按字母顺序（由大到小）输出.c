/*要求通过键盘输入5串字符串，然后调用函数sort完成字符串从大到小排列，然后调用print函数完成字符串输出。
提示：字符串输出可以采用gets函数，
sort函数原型为 void sort(char *name[],int n)
print函数原型为 void print(char *name[],int n)
多个字符串可以用字符串指针变量数组来描述
*/

#include <stdio.h>
#include <string.h>
int main()
 {void sort(char *name[ ],int n);
  void print(char *name[ ],int n);
  char *name[5];
  char a[31],b[31],c[31],d[31],e[31];
  int n=5,i;
   name[0]=a;name[1]=b;name[2]=c;name[3]=d;name[4]=e;
  printf("Please input 5 strings:");
  for(i=0;i<5;i++)
  {
	 
	  gets(name[i]);
  }
  printf("Output:\n");
  sort(name,n);
  printf("After the strings are sorted the result:\n");
  print(name,n);
  return 0;
}

void sort(char *name[],int n){
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++){
		k=i;
      	for(j=i+1;j<n;j++)
	    	if(strcmp(name[k],name[j])>0) 
				k=j;
				if(k!=i){
					temp=name[i]; 
					name[i]=name[k]; 
					name[k]=temp;}
	 }
}

void print(char *name[ ],int n)
 {int i;
  for(i=0;i<n;i++)
    printf("%s\n",name[i]);
}

