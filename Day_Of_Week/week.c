#include <stdio.h>
#include <ctype.h>
int main(){

    char week ='\0';
    printf("Enter a day of week(M,T,W,R,F,S,U):");
    scanf("%c",&week);
    week = toupper(week);

    switch(week){
        case 'M':
        printf("It's Monday\n");
        break;

        case 'T':
        printf("It's Tuesday\n");
        break;

        case 'W':
        printf("It's Wednesday\n");
        break;

        case 'R':
        printf("It's Thursday\n");
        break;    
    
        case 'F':
        printf("It's Friday\n");
        break;

        case 'S':
        printf("It's Saturday\n");
        break;    
    
        case 'U':
        printf("It's Sunday\n");
        break;
        
        default:
        printf("Please enter (M,T,W,R,F,S,U)\n");
    
    }
    return 0;
}