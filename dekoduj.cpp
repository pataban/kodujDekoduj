#include<stdio.h>
#include<cstdlib>
#include<math.h>
#include<time.h>
#define prt(a) printf("%d\n",a);
#define aaa printf("a\n");

int main()
{
    int n=1,c;
    while(getchar()!=EOF)
    {
        for(int i=pow(2,n)-1;i;i--)   getchar();
        scanf("%3d",&c);
        putchar(c);
        n++;
        if(n>5) n=1;
    }
}