#include <stdlib.h>
#include <stdio.h>

int main(void){
    double ab,bc,cd;
	double mean;
    
//Getting inputs
    printf("Enter first sub:\n");
    scanf("%lf",&ab);
    printf("Enter second sub:\n");
    scanf("%lf",&bc);
    printf("Enter third sub:\n");
    scanf("%lf",&cd);
    
//Mean
compute(){
	
  mean= (ab+bc+cd)/2;
  printf("%lf\n",mean);
}
    return (0);
}
