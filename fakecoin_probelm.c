//fake coin problem by decrease and conquer
//decrease by factor three..
#include<stdio.h>
int fakeCoin(int coins[], int left, int right, int powerOfThree){
    if(left == right) return left;
    int mid1 = left + powerOfThree, mid2 = mid1 + 1 + powerOfThree;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = left; i <= right; i++){
        if(i <= mid1) sum1 += coins[i];
        else if(i <= mid2) sum2 += coins[i];
        else sum3 += coins[i];
    }
    powerOfThree = (right - left + 1)/3 - 1;
    if(sum1 == sum2) return fakeCoin(coins, mid2+1, right, powerOfThree);
    if(sum2 == sum3) return fakeCoin(coins, left, mid1, powerOfThree);
    if(sum1 == sum3) return fakeCoin(coins, mid1+1, mid2, powerOfThree);
    return fakeCoin(coins, mid1+1, mid2, powerOfThree);
}

int main(){
    int size = 9, powerOfThree = size/3 - 1;
    int coins[10] = {0,5,5,5,5,4,5,5,5,5};
    printf("Fake coin is present at position %d.\n", fakeCoin(coins, 1, size, powerOfThree));
    return 0;
}