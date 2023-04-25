/******************************************************************************

store student details using structure...

Input:
3 
Student detail 1:
Enter RollNo: 71
Enter dept: cse 
Enter Name: Raja
Enter Cgpa: 8.9

Student detail 2:
Enter RollNo: 32
Enter dept: cse 
Enter Name: Ram
Enter Cgpa: 7.9

Student detail 3:
Enter RollNo: 60
Enter dept: EEE 
Enter Name: john
Enter Cgpa: 7.9

Output:

--- Maximum Mark of CSE Students --- 
RollNo: 71 
Dept: CSE 
Name: Raja 
Cgpa: 8.56

--- Maximum Mark of EEE Students --- 
RollNo: 60 
Dept: EEE 
Name: john
Cgpa: 7.9

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct college{
    int roll_no;
    char dept[5];
    char name[10];
    float cgpa;
};

struct Score{
  float Max;
  char dept[5];
};

void upper(char a[]){
    for(int i=0;i<strlen(a);i++)
    a[i]=toupper(a[i]);
}

int main()
{
    int n;
    char department[5][101]={"CSE","ECE","EEE","MECH","CIVIL"};
    scanf("%d",&n);
    struct college stud[n];
    struct Score cgpa[5];
    for(int i=0;i<5;i++){
    strcpy(cgpa[i].dept,department[i]);
    cgpa[i].Max=-1.0;
    }
    char t[20];
    for(int i=0;i<n;i++){
        printf("Student Detail %d:\n",i+1);
        printf("Enter Rollno: ");
        scanf("%d",&stud[i].roll_no);
        printf("Enter Dept: ");
        scanf("%s",stud[i].dept);
        printf("Enter Name: ");
        scanf("%s",stud[i].name);
        printf("Enter Cgpa: ");
        scanf("%f",&stud[i].cgpa);
        upper(stud[i].dept);
        strcpy(stud[i].dept,stud[i].dept);
        strcpy(t,stud[i].dept);
        for(int j=0;j<5;j++){
        if(strcmp(t,cgpa[j].dept)==0 && cgpa[j].Max<stud[i].cgpa)
        cgpa[j].Max=stud[i].cgpa;
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0;i<5;i++){
    if(cgpa[i].Max>=0){
    int c=1;
    for(int j=0;j<n;j++){
    if(strcmp(cgpa[i].dept,stud[j].dept)==0){
    printf("\n\n---Maximum Mark of %s Department Students ---\n",cgpa[i].dept);
    printf("RollNo: %d\n",stud[i].roll_no);
    printf("Dept: %s\n",stud[i].dept);
    printf("Name: %s\n",stud[i].name);
    printf("Cgpa: %.2f\n\n",stud[i].cgpa);
    }
    }
    }
    }
    
    return 0;
}

