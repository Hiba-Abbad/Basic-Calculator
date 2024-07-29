#include <stdio.h>
int main(){
printf("                             \"BASIC CALCULATOR\"\n");
int choice;
double num1,num2,result;
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("Enter your choice (1 - 4) : ");
scanf("%d",&choice);

          //get numbers from user
printf("Enter first number : ");
scanf("%lf",&num1);
printf("Enter second number : ");
scanf("%lf",&num2);

     //perform calculations based on user choice

switch(choice){
    case 1:
    result = num1 + num2;
    printf("Result : %.2lf\n",result);
    break;

    case 2:
    result = num1 - num2;
    printf("Result : %.2lf\n",result);
    break;

    case 3: 
    result = num1 * num2;
    printf("Result : %.2lf\n",result);
    break;

    case 4:
    if(num2 != 0){
        result = num1 / num2;
        printf("Result : %.2lf\n",result);  
    }else{
        printf("ERROR!: Undefined.\n");
    }
    break;
    default:
          printf("Invalid choice!\n");
}

    return 0;
}