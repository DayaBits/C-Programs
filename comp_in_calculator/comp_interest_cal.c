#include <stdio.h>
#include <math.h>

int main(){
    double principal =0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded =0;
    double total=0.0;

    printf("Compound interest calculator");
    // compount_interest= P(1+r/n)^nt
    
    printf("Enter the principal(P):");
    scanf("%lf",&principal);

    printf("Enter the rate(r):");
    scanf("%lf",&rate);
    rate=rate/100;

    printf("Enter the year(t)):");
    scanf("%d",&years);

    printf("Enter the times compounded per year(n):");
    scanf("%d",&timesCompounded);

    total=principal*pow(1+rate/timesCompounded,timesCompounded*years);
    printf("After %d years,the total will be $%.2lf",years,total);


    return 0;
}