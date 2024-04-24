// (a + b)2  +  (a + b)2

#include<stdio.h>
 int main(){
    int a;
    int b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    int x=(a+b)*(a+b)+(a+b)*(a+b);
    printf("ans sum %d:",x);
}