#include<stdio.h>
int main(){
int i= 72;
int* j =&i;
//j is pointing to i
printf("The address of i is %p", &i);
printf(" the address of i is %p", &i);
    return 0;
}