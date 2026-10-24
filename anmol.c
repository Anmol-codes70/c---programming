#include <stdio.h>

int main(){
    int i;
    int arry[3];
    int sum=0;
    // input by user
    printf("enter 3 number");
    for(i=0;i<3;i++){
        scanf("%d", &arry[i]);
        sum = sum+arry[i];
    }
        printf("sum is=%d\n", sum);
    // output
return 0;
}