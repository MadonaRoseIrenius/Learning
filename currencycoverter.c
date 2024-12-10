// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    //usd,inr,aed
    float value,result;
    int n,m;
    char currency[4];
    printf("Welcome to currency converter\n What currency do you want to convert?\n(Enter the number alonside the currency name)\n");
    printf("1.INR\n2.USD\n3.AED\n");
    scanf("%d",&n);
    if(n<=3){
    printf("What currency do you want to convert it to?\n(Enter the number alonside the currency name)\n");
    if(n==1){
        printf("2.USD\n3.AED");}
    else if(n==2)
    {printf("1.INR\n3.AED");}
    else if(n==3)
    {printf("1.INR\n2.USD");}}
    else
    {printf("Please enter a valid number!");
     return 1;}
    scanf("%d",&m);
    if(m<=3){
    printf("Enter the value: ");
    scanf("%f",&value);
    if(n==1&&m==2)
    {result=value*0.011783;
        strcpy(currency,"USD");}
    else if(n==1&&m==3)
    {result=value*0.043276;
    strcpy(currency,"AED");}
    else if(n==2&&m==1)
    {result=value*84.8755;
    strcpy(currency,"INR");}
    else if(n==2&&m==3)
    {result=value*3.6731;
    strcpy(currency,"AED");}
    else if(n==3&&m==1)
    {result=value*23.107282;
    strcpy(currency,"INR");}
    else if(n==3&&m==2)
    {result=value*0.27225;
    strcpy(currency,"USD");}
    printf("It is %f %s",result,currency);
    printf("\nAll exchange rates are from 10th December 2024");}
    else
    {printf("Please enter a valid number!");
     return 1;}

    return 0;
}
