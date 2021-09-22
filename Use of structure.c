#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    };
void main(){
    int i;
    struct student s[3];
    for(i=0;i<3;i++){
        printf("Enter Rollno:");
        scanf("%d",&s[i].rollno);
        printf("Enter Name:");
        scanf("%s",&s[i].name);
        printf("\n");//printing structure elements
        for(i=0;i<3;i++){
        printf("Rollno:%d\n",s[i].rollno);
        printf("Name: %s\n",s[i].name);
        }
        }
}
