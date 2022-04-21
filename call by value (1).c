#include<stdio.h>
#include<conio.h>
void add (int a,int b);
void main()
{
    int a,b;
    clrscr();
    printf("enter value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);
    add(a,b);
    getch();
}
void add (int x,int y)
{
    int z;
    z=x+y;
    printf("addition of two number is%d",z);
}


    