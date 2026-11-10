#include <stdio.h>
int main()
{
int values[10];
printf("enter 10 integers:");
for(int i=0; i<10;++i)
{scanf("%d",&values[i]);
}
printf("displaying integers:");
for(int i=0; i<10;i++)
{
printf("%d\n",&values[i]);
}
return 0;
}
