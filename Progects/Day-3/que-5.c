#include<stdio.h>
main(){
    int m1,m2,m3,tot,avg;
    printf("Enter the mark of m1:");
    scanf("%d",&m1);
     printf("Enter the mark of m2:");
    scanf("%d",&m2);
     printf("Enter the mark of m3:");
    scanf("%d",&m3);
    tot=m1+m2+m3;
    printf("sum of total is:%d",m1+m2+m3);
    avg=tot/3;
    printf("avg is:%d",avg);
    
}