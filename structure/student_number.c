#include<stdio.h>

typedef struct StudentNum{
    int studentId;
    int studentRoll;
    int marks[5];
    int joiningYear;
    int passOutYear;

}studentNum;

void sumAvarage(studentNum marks);
void studying(studentNum svu);
void display(studentNum details);

int main(){
    printf("Enter the number of students to show :\n");
    int numberOfStudent;
    scanf("%d",&numberOfStudent);
    studentNum s[numberOfStudent];
    for(int i=0;i<numberOfStudent;i++){
        printf("Enter the details of student %d\n",i+1);

        printf("Enter Your student Id :\n");
        int id;
        scanf("%d",&id);
        s[i].studentId = id;

        printf("Enter Your Roll No. :\n");
        int roll;
        scanf("%d",&roll);
        s[i].studentRoll = roll;

        int mark;
        for(int j=0;j<5;j++){
            printf("Enter the marks in subject %d(out of 100):\n",j+1);
            scanf("%d",&mark);
            s[i].marks[j]=mark;
            // printf("\n%d",s[i].marks[j]);
        }
        // s[numberOfStudent].marks[5] = mark;

        printf("Enter your course joining year :\n");
        int joinYear;
        scanf("%d",&joinYear);
        s[i].joiningYear = joinYear;

        printf("Enter your course passout year :\n");
        int passYear;
        scanf("%d",&passYear);
        s[i].passOutYear = passYear;

        sumAvarage(s[i]);
        studying(s[i]);
        display(s[i]);
        
    }

    return 0;
}

void sumAvarage(studentNum mark){
    int total;
    total=0;
    // printf("\n");
    // printf("\n");
    // printf("mark.roll is %d\n",mark.marks[0]);
    for(int i=0;i<5;i++){
        total=total+mark.marks[i];
        // printf("%d\n",total);
    }
    printf("You scored %d out of 500\n",total);
    int per;
    per=(total/5);
    printf("You scored %d parcentages\n",per);

}

void studying(studentNum svu){
    if((2023 >= svu.passOutYear)){
        printf("The student isn't studing yet in this college.\n");
    }
    else{
        printf("The student is still studing here.\n");
    }
}

void display(studentNum details){
    printf("Your roll no. is :%d\n",details.studentRoll);
    printf("Your student id is :%d\n",details.studentId);
    printf("You join your college in %d.\n",details.joiningYear);
    printf("You passed out in %d\n",details.passOutYear);

}