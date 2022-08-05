#include<stdio.h>

int main(){
    int size = 6;
    int arr[] = {60, 35, 81, 98, 14, 47};
    int count[size];
    int sorted[size];
    for(int i = 0; i < size; i++) count[i] = 0;
    for(int i = 0; i < size - 1; i++) 
        for(int j = i+1; j < size; j++)
            if(arr[i] < arr[j]) count[j]++;
            else count[i]++;
    for(int i = 0; i < size; i++) sorted[count[i]] = arr[i];
    for(int i = 0; i < size; i++) printf("%d ", sorted[i]);
    return 0;
}