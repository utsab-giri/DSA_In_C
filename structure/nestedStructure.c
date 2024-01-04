#include<stdio.h>

typedef struct College{
    int collegeId;
    int totalStudent;
    struct Student{
        int rollNo;
        int semester;
        float lastSgpa;
    }student;

}college;

void showDetails(college svu);

int main(){
    printf("Enter your college Id :\n");
    int clgId;
    scanf("%d",&clgId);
    printf("Enter the number of your total college students :\n");
    int totalStu;
    scanf("%d",&totalStu);
    printf("Enter your college roll number :\n");
    int roll;
    scanf("%d",&roll);
    printf("Enter your current semester in digit :\n");
    int sem;
    scanf("%d",&sem);
    printf("Enter your last semester sgpa :\n");
    float sgpa;
    scanf("%f",&sgpa);
    
    college svu;
    // college student sayan;
    svu.collegeId=clgId;
    svu.totalStudent=totalStu;
    svu.student.rollNo=roll;
    svu.student.semester=sem;
    svu.student.lastSgpa=sgpa;
    
    showDetails(svu);
    return 0;
}

void showDetails(college svu){
    printf("Your college id is :%d\n",svu.collegeId);
    printf("Total student of your college is :%d\n",svu.totalStudent);
    printf("Your roll number is :%d\n",svu.student.rollNo);
    printf("your current semester is %dth sem.\n",svu.student.semester);
    printf("Your last sgpa is :%f\n",svu.student.lastSgpa);
    
}