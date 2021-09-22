#include <stdio.h>
int main()
{
    struct student{
        int roll_no;
        char name[20];
    }s1;
void main(){
        printf("Enter Name:");
        scanf("%s", &s1.name);
        printf("Enter Roll number:");
        scanf("%d",&s1.roll_no);
        printf("\nName: %s",s1.name);  //accessing elements in structure
        printf("\nRoll no.is %d\n",s1.roll_no);
}}
