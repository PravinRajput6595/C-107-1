#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[5];
  
};
void main()
{
    int i;
    struct student s[5];
    printf("enter student information");
    for(i=0; i<60; i++)
    {
        printf("\nenter rollno\n");
        scanf("%d",&s[i].rollno);
        printf("enter name\n");
        scanf("%s",&s[i].name);
    
      }
        for(i=0; i<60; i++)
        {
            printf("\nroll no is- %d",s[i].rollno);
            printf("\nname is %s-",s[i].name);
          
        }
    
}