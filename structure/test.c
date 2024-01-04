#include<stdio.h>
typedef struct Person{
    int age;
    float salary;
}person;

person grossSalary(person bablu);
int main(){
    person bablu;
    bablu.age=45;
    bablu.salary=30000;
    
    printf("%d\n",&bablu);
    bablu=grossSalary(bablu);
    printf("%d",bablu.age);
    return 0;
}
person grossSalary(person bablu){
    printf("%d\n",&bablu);
    bablu.age=100;
    return bablu;
}