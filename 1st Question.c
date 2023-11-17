#include<stdio.h>
int main(){

int num;
printf("Enter Number : ");
scanf("%d",&num);

if(num>0){

    printf("\nYou entered a positive number");
}

else if (num<0){

    printf("\nDonot be so negative");
}

else{

    printf("\nYou have entered zero");
}
return 0;
}