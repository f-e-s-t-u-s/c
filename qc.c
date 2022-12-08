#include <stdio.h>
#include <stdlib.h>

//Print all odd numbers between 40 and 117 inclusive

int main(void){
    int a=40;

    
    do{
        if(a%2 != 0){
            printf("%d\n",a);
            a++;
        }
        else{
            a++;
        }
    }
    while(a<=117);
}