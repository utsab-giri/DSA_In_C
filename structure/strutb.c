#include<stdio.h>



typedef struct BankAccount{
    char nameFirstLatter;
    int balance;
    char gender;
    int password;
}BankAcc;

void showDetails(BankAcc sayan);
BankAcc deposit(BankAcc sayan);
BankAcc withdraw(BankAcc sayan);


int main(){
    printf("Enter The balance:");
    int balance;
    scanf("%d",&balance);
    printf("Enter The First latter of your name :");
    char name;
    scanf("%c",&name);
    scanf("%c",&name);
    printf("Enter The Four digit password:");
    int password;
    scanf("%d",&password);
    printf("Enter The gender:");
    char gender;
    scanf("%c");scanf("%c",&gender);
    BankAcc sayan;
    
    sayan.nameFirstLatter=name;
    sayan.gender=gender;
    sayan.balance=balance;
    sayan.password=password;
    while(1){
        printf("Enter 1 for show details,2 for deposit, 3 for withdraw,4 for exit...\n");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
                showDetails(sayan);
                break;
            case 2:
                sayan=deposit(sayan);
                break;
            case 3:
                sayan=withdraw(sayan);
                break;
            case 4:
                exit(0);
            default:
                printf("You entered a wrong choice.\n");
            
            
        }
    }
    // showDetails(sayan);
    // showDetails(sayan);
    return 0;

}

void showDetails(BankAcc sayan){
    printf("Name is Sayan :\n");
    // printf("%c",sayan.nameFirstLatter);
    printf("First latter of name is %c \n",sayan.nameFirstLatter);
    if((sayan.gender=='M')||(sayan.gender=='m')){
        printf("Gender of the candidate is MALE\n");
    }
    else{
        printf("Gender of the candidate is FEMALE\n");
    }
    printf(" the available balance is :%d\n",sayan.balance);
    
}

BankAcc deposit(BankAcc sayan){
    printf("enter the balance you want to deposit:");
    int amount;
    scanf("%d",&amount);
    sayan.balance=sayan.balance+amount;
    // printf("%d\n",sayan.balance);
    return sayan;
}

BankAcc withdraw(BankAcc sayan){
    int count=3;

    while(count){
        count--;
        printf("Atfirst Enter the Password for confirmation :");
        int password;
        scanf("%d",&password);
        // printf("User password=%d\n",sayan.password);
        // printf("Check password=%d\n",password);
        if(sayan.password==password){
            printf("enter the balance you want to withdraw:\n");
            int amount;
            scanf("%d",&amount);
            sayan.balance=sayan.balance-amount;
            break;
        }
        else{
            printf("You entered a wrong password.\ntry again You have only %d chances left\n",count);
        }
        
    }
    if(count==0)
    printf("You lost your all chances. to reset you password contact branch");
    return sayan;
}