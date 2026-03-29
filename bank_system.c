#include<stdio.h>
#include<string.h>
void deposit1(double *bank_balance)
{
    double money;
    printf("deposit ur money:");
    scanf("%lf",&money);
     
    if(money>=100){
        *bank_balance = *bank_balance + money;
        printf("balance is: %lf ",*bank_balance);
        printf("\n");
        printf("enter the number 1 - deposit, 2 - withdraw, 3 - bank balance, 4 - cancel");
        printf("\n");
}
};
void withdraw1(double *bank_balance){
    double money;
     printf("withdraw ur money:");
    scanf("%lf",&money);
     if(money<=*bank_balance){
        *bank_balance = *bank_balance - money;
        printf("balance is: %lf",*bank_balance);
        printf("\n");
        printf("enter the number 1 - deposit, 2 - withdraw, 3 - bank balance, 4 - cancel");
          printf("\n");
        
}
 else{
        printf("insufficient money");
         }
};

void bank_balance1(double *bank_balance){
    
     printf("check ur bankbalance:");
         printf("%lf",*bank_balance);
         printf("\n");
          printf("enter the number 1 - deposit, 2 - withdraw, 3 - bank balance, 4 - cancel");
 printf("\n");
}

int main(){
    int age,n,account_no=1,account_no1;
    double bank_balance=500,deposit,withdraw,money,new;
    char name[20],place[10],ans;
   printf("Do u have an account:");
   scanf("%c",&ans);
   if(ans=='N' || ans== 'n'){ 
   printf("Enter your Name:");
   getchar();
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = '\0';
   printf("enter ur Age:");
   scanf("%d",&age);
   printf("enter ur place:");
   scanf("%s",place);
   bank_balance = 500;
   printf("successfull create an account %s and  bank balance is %lf",name,bank_balance);
   printf("\n");
   account_no++;
   printf("ur account is: %d",account_no);
   printf("\n");

}
printf("enter ur accoun number:");
    scanf("%d",&account_no);
    if(account_no>=1){
   printf("enter the number 1 - deposit, 2 - withdraw, 3 - bank balance, 4 - cancel");
   printf("\n");
   while(1){
    scanf("%d",&n);
    if(n==1){
        deposit1(&bank_balance);
        continue;
    }
    else if (n==2){
        withdraw1(&bank_balance);
        continue;
    }
    else if (n==3)
    {
        bank_balance1(&bank_balance);
        continue;
    }
    else{
        return 0;
    }
    }
}
return 0;
}
