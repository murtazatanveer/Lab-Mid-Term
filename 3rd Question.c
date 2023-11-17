#include<stdio.h>
int main(){

int num;
printf("Enter Number : ");
scanf("%d",&num);

do
{

    for(int i=1;i<=num;i++){

        printf("*");
}
       
if(num%2==0){

    num = num/2;

}

else{

    num = (3*num)+1;

    
}

    
printf("\n");



} while (num>1);



}