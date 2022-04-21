#include<stdio.h>
#include<conio.h>
main()
{
    int t1,t2,no,nextno;
    clrscr();
    printf("enter number");
    scanf("%d",&no);
    t1=0;
    t2=1;
    printf("%d",t1);
    printf("%d",t2);
    nextno=t1+t2;
    while(nextno<no)
    {
        printf("\t%d",nextno);
        t1=t2,
        t2=nextno;
        nextno=t1+t2;
    }
    getch();

}
