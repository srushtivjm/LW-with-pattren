#include<stdio.h>
main()
{
	int r,c;
	for(r=1;r<=5;r++)
     {
       for(c=r;c>=1;c--)
       {
       	if(c%2==1)
       	{
       		printf(" %c",'-');
		}
		else
		{
			printf(" %c",'|');
		}
	   }
	   printf("\n");
	 }
}
