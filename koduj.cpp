#include<stdio.h>
#include<cstdlib>
#include<math.h>
#include<time.h>
#define prt(a) printf("%d\n",a);
#define aaa printf("a\n");

int main()
{
    srand(time(NULL));
    int n=1,c=0;
    while(true)
    {
        c=getchar();
		if(c==EOF)		break;
		for(int i=pow(2,n);i;i--)   putchar(rand()%10+48);
        printf("%03d",c);
        n++;
        if(n>5) n=1;
    }
}