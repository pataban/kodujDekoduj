#include<stdio.h>
#include<cstdlib>
#include<math.h>
#include<time.h>
#define prt(a) printf("%d\n",a);
#define aaa printf("a\n");
#define bbb printf("b\n");
#define ccc printf("c\n");

void koduj();
void dekoduj();

int main()
{
    printf("\nWybierz\n0. Exit\n1. Koduj\n2. Dekoduj\nTwoj wybor: ");
    switch(getchar()-48)
    {
    case 0:     return 0;       break;
    case 1:     koduj();        break;
    case 2:     dekoduj();      break;
    default:                    break;
    }
}

void koduj()
{
    getchar();//'\n'
    srand(time(NULL));
    int n=1;
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        for(int i=pow(2,n);i;i--)   putchar(rand()%10+48);
        printf("%03d",c);
        n++;
        if(n>5) n=1;
    }
}

void dekoduj()
{
    getchar();//'\n'
    int n=1,c;
    while(!feof(stdin))
    {
        for(int i=pow(2,n);i;i--)   getchar();
        scanf("%3d",&c);
        putchar(c);
        n++;
        if(n>5) n=1;
    }
}
