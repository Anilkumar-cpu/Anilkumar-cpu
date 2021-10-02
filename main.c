#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,avg;
    printf("enter a marks");
    scanf("%d",&a);
    printf(" enter b marks");
    scanf("%d",&b);
    printf("enter c marks");
    scanf("%d",&c);
    avg =(a+b+c)/3;
    printf("%d",avg);
    if (avg>80){
        printf("your good boy");
    }
    else if("avg>=60 && avg<=80"){
        printf("varage boy");
    }
    else if (avg>=40 && avg<=60){
        printf("hard");
    }
    else{
        printf("yor failed");
    }
    return 0;
}
