#include <stdio.h>
#include <stdlib.h>

//asks for two numbers and displays either product or sum

int main(void){
    int a;
    int b;
    int sum,choice;

    printf("Enter first number:\n");
    scanf("%i",&a);
    printf("Enter second number:\n");
    scanf("%i",&b);

    printf("Choose an option\n");
    printf("1.Sum\n");
    printf("2.Product\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("The sum is: %d\n",a+b);
    }
    else{
        printf("The product is: %d\n",a*b);
    }
}