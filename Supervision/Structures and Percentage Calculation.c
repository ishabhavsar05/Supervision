//Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
//Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
//roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
//student.

#include<stdio.h>
#include<conio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

// Function to calculate the total marks
int calculateTotal(int chem, int maths, int phy) 
{
    return chem + maths + phy;
}

float calculatePercentage(int total) 
{
    return total / 3.0;
}

int main() 
{
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf(" %[^\n]s", students[i].name);  
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    printf("Mark sheets:\n");
    for (i = 0; i < 5; i++) 
	{
        int total = calculateTotal(students[i].chem_marks, students[i].maths_marks, students[i].phy_marks);
        float percentage = calculatePercentage(total);
        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total);
        printf("Percent => %.2f%%\n\n", percentage);
    }

    return 0;
}
