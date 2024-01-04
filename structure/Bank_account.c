#include<stdio.h>
int deposite_cash(){
    int a;
    printf("You want to deposite cash.\nTo deposite balance press 1 either 0.");
    if(a=1){
        return 0;
    }
    else
        return 1;
}

int withdraw(int n,int cash){
    int a;
    printf("Enter your password :");
    scanf("%d",&a);
    if(n==a){
        printf("Your password is matched.\nHow much you withdraw,Enter amount :");
        int c;
        scanf("%d",&c);
        printf("Withdrwal Sucessful.");
        cash=cash-c;
    }
    else{
        printf("You entered a wrong password.\nTry again.");
    }
    
}

typedef struct BankAccount {
    float bal;
    char f_latter;
    char gender;
    int password;
}person;

int main(){
    person Ram;
    float a;
    printf("Enter the Bank Balance :");
    scanf("%f",&a);
    Ram.bal =a;

    char b;
    printf("Enter the First latter of name :");
    scanf("%c%c", &b,&b);
    Ram.f_latter =b;

    char c;
    printf("\nEnter your gender.\nIf you male Enter M either F :");
    scanf("%c%c",&c,&c);
    Ram.gender =c;

    int d;
    printf("\nEnter your four digit password :");
    scanf("%d",&d);
    Ram.password =d;

    int p=deposite_cash();
    if(p==1){
        printf("Enter your amount :");
        float x;
        scanf("%f",&x);
        printf("Your current Balance is :%d",(Ram.bal+x));
    }
    else{
        printf("Your balance is:%d",Ram.bal);
    }

    withdraw(Ram.password,Ram.bal);
    printf("Your current balance is :%d",Ram.bal);
    return 0;
}