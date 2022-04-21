#include<stdio.h>
struct student
{
    int rollno;
    char sname[15];
    char sclass[10];
}
main()
{
    struct student s1,s2,s3;
    printf("enter rollno\n");
    scanf("%d",&s1.rollno);
    printf("enter sname\n");
    scanf("%s",&s1.sname);
    printf("enter sclass\n");
    scanf("%s",&s1.sclass);

    printf("enter rollno\n");
    scanf("%d",&s2.rollno);
    printf("enter name\n");
    scanf("%s",&s2.sname);
    printf("enter class\n");
    scanf("%s",&s2.sclass);

    printf("\nroll no is- %d",s1.rollno);
    printf("\nsname is %s-",s1.sname);
    printf("\nsclass is %s-",s1.sclass);
    printf("\nrollno is %d-",s2.rollno);
    printf("\nname is %s-",s2.sname);
    printf("\nsclass is %s-",s2.sclass);
}