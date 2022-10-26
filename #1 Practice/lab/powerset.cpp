#include <stdio.h>
#include <math.h>
int main()
{
	char set[]= {'a','b','c'};
  int size=sizeof(set)/sizeof(set[0]);
  int size2=pow(2,size);
	int i,j;
	for(i=0;i<size2;i++)
	{
	for(j=0;j<size;j++)
		if(i&(1<<j))
			printf("%c",set[j]);
	printf("\n");
	}
	return 0;
}
