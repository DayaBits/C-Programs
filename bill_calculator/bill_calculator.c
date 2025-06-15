#include <stdio.h>
#include <string.h>

int main(){

// simple bill calculator
char item_name[50]="";
char name[50]="";
int quantity=0;
float price=0.0f;
float total=0.0f;
char currency='$';

printf("Enter ur name:");
fgets(name, sizeof(name),stdin);
name[strlen(name)-1]='\0';

printf("Enter the item name:");
fgets(item_name, sizeof(item_name),stdin);
item_name[strlen(item_name)-1]='\0';

printf("Enter the no of item u wanna buy:");
scanf("%d",&quantity);

printf("Enter the item's price:");
scanf("%f",&price);

total= price * quantity;

printf("\n---------WELCOME TO-----------\n");
printf("-------DAYABITS'S STORE---------\n");
printf("Hey! %s you ordered %d %s\n",name,quantity,item_name);
printf("Your total cost is %c%.2f\n",currency,total);
printf("---------VISIT AGAIN-----------");

return 0;
}