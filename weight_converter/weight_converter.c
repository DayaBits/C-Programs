#include <stdio.h>

int main(){

    // WEIGHT CONVERTER PROGRAM
    int choice =0;
    float pounds=0.0f;
    float kilograms =0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1.Kilograms to Pounds\n");
    printf("2.Pounds to Kilograms\n");
    printf("Enter ur choice(1 or 2):\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("Enter the weight in kilogram:");
        scanf("%f",&kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n",kilograms,pounds);
    }

    else if(choice==2){
        printf("Enter the weight in pounds:");
        scanf("%f",&pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n",pounds,kilograms);
    }

    else{
        printf("Invalid choice! Pls enter 1 or 2:");
    }

    return 0;
}