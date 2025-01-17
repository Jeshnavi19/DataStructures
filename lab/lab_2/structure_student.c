#include<stdio.h>
 struct student{
     char name[50];
     int age;
     float total_marks;
 };
    
int main()s
{
    struct student std1,std2;
    float avg_marks;
    printf("enter the details of the student1:\n");
    printf("Name: ");
    scanf("%s", std1.name); 
    printf("Age: ");
    scanf("%d",&std1.age);
    printf("total marks:");
    scanf("%f",&std1.total_marks);
    
    getchar();
    printf("enter the details of the student2:\n");
    printf("Name: ");
    scanf("%s", std2.name); 
    printf("Age: ");
    scanf("%d",&std2.age);
    printf("total marks:");
    scanf("%f\n",&std2.total_marks);
    
    avg_marks=(std1.total_marks+std2.total_marks)/2.0;
    
    printf("Student 1 Information:\n");
    printf("Name: %s\n", std1.name);
    printf("Age: %d\n", std1.age);
    printf("Total Marks: %.2f\n", std1.total_marks);

    printf("\nStudent 2 Information:\n");
    printf("Name: %s\n", std2.name);
    printf("Age: %d\n", std2.age);
    printf("Total Marks: %.2f\n", std2.total_marks);

    printf("\nAverage of Total Marks: %.2f\n", avg_marks);

    return 0; 
    
}
