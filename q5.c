#include <stdio.h>
#include<string.h>
struct customer {
    char name[30];
    int accnum;
    int balance;
};

void highBalance(struct customer data[]) {
    int count = 0;
    printf("People with balance more than 50000:\n");
    for (int i = 0; i < 15; i++) {
        if (data[i].balance > 50000)
            printf("%s\n", data[i].name);
        else
            count++;
    }
    if (count == 15)
        printf("None of the customers has more than 50000 balance\n");
}

void addMoney(struct customer data[]) {
    int count = 0;
    for (int i = 0; i < 15; i++) {
        if (data[i].balance > 10000) {
            data[i].balance += 1000;
            printf("New account balance of customer %s is %d\n", data[i].name, data[i].balance);
        } else {
            count++;
        }
    }
    if (count == 15)
        printf("No customer's balance is incremented\n");
}
void withdraw(struct customer data[])
{
    char givenaccount[30];
    int amount,count;
    printf("Enter the name of account to deduct amount");
    scanf("%s",givenaccount);
    printf("Enter the amount to deduct: ");
    scanf("%d",&amount);
    for(int i=0;i<15;i++)
    {
        if (strcmp(givenaccount,data[i].name)==0)
        {
        data[i].balance=data[i].balance-amount;
        printf("The finalbalance is %d",data[i].balance);
        }
        else
        count++;
    }
    if(count==15)
    printf("There is nosuch account holder");
}

int main() {
    struct customer data[15] = {
        {"ram", 1001, 60000},
        {"anya", 1002, 75000},
        {"vijaya", 1003, 45000},
        {"ruchitha", 1004, 15000},
        {"arthi", 1005, 9000},
        {"hashaa", 1006, 11000},
        {"teeshma", 1007, 42000},
        {"rdhika", 1008, 68000},
        {"punkaj", 1009, 8900},
        {"ester", 1010, 32000},
        {"phani", 1011, 52000},
        {"venky", 1012, 63000},
        {"mahe", 1013, 76000},
        {"narmada", 1014, 18000},
        {"jahnavi", 1015, 10500}
    };

    highBalance(data);
    addMoney(data);
    withdraw(data);

    return 0;
}
