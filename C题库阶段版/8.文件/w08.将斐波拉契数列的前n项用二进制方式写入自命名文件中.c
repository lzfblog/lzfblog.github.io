/*程序功能：将斐波拉契数列的前n项用二进制方式写入自命名文件中，然后从该文件中读取这n个数输出。

注：a1=1, a2=1, a3=2, ......, an=an-1+an-2*/

#include <stdio.h>
#include <stdlib.h>

void save(char str[20], int n);
void prnt(char str[20], int n);

int main()
{
	int n;
	char str[20];
	
	printf("Input filename:");
	scanf("%s", str);
	printf("Input n:");
	scanf("%d", &n);
	save(str, n);
	prnt(str, n);
	return 0;
}

void save(char str[20], int n)
{
	/******start******/
	int i;
	FILE *fp;
	fp=fopen(str,"wb");
	if (fp == NULL)
	{
		exit(0);
	}
	for(i=0;i<n;i++){
		fwrite()
	}
	
	/******end******/
}
void prnt(char str[20], int n)
{
	int i, te;
	FILE *fp;

	fp = fopen(str, "rb");
	if (fp == NULL)
	{
		exit(0);
	}
	printf("Output:\n");
	for (i = 0; i < n; i++)
	{
		fread(&te, sizeof(int), 1, fp);
		printf("%d ", te);
	}
	printf("\n");
	fclose(fp);
}


