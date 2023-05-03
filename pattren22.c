#include<stdio.h>
main()
{
	char r,c,n=65;
	for(r=1;r<=5;r++)
	{ 
	 for(c=1;c<=r;c++)
	 {
	 	printf(" %c",n);
	 	n++;
	 }
	 printf("\n");
	}
}
