#include <stdio.h>

int main(){
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Enter ur choice:");
    scanf("%c",&choice);

    if(choice == 'C'){
        printf("Enter the tempt in Celsius:");
        scanf("%f",&celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.2f celsius is equal to %.2f fahrenheit\n",celsius,fahrenheit);
    }

    else if(choice == 'F'){
        printf("Enter the tempt in Fahrenheit:");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("%.2f fahrenheit is equal to %.2f celsius\n",fahrenheit,celsius);
    }

    else{
        printf("Invalid choice! Pls enter C or F");
    }

    return 0;
}