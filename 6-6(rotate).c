/*Write a program in C to rotate an array by N positions*/
#include <stdio.h>
void shiftArrayOnePosition(int *array, int size) {
    int i, temp;
    /*Save first element in a temporary variable and 
    shift remaining elements by one index left */
    temp = array[0];
 
    for(i = 0; i < size-1; i++) {
        array[i] = array[i+1];
    }
    /* Now put the firt element of 
    original array to last index */   
    array[i] = temp;
}
 
/*
This function shifts array by N positions
*/
void rotateArray(int *array, int size, int N){
    int i;
    for(i = 0; i < N; i++){
        shiftArrayOnePosition(array, size);
    }
    return;
}
 
int main(){
    int i,n,N;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter the Position N from where you want to rotate:");
    scanf("%d",&N);
    printf("Original Array\n");
    for(i = 0; i<n; i++){
        printf("%d ", array[i]);
    } 
    rotateArray(array, n,N);
  
    printf("\nRotated Array\n");
    for(i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
 
    return 0;
}

