// 1) Write a program that accepts all elements of an integer array and finds out maximum and minimum element of the array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, biggest, smallest;
    printf("Enter number of elemnets: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element for position %d : ", (i+1));
        scanf("%d", &arr[i]);
        if(i == 0){
            biggest = arr[0];
            smallest = arr[0];
            }
        if(arr[i] > biggest)
            biggest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Biggest : %d \nSmallest : %d", biggest, smallest);
    return 0;
}


// OUTPUT:
// Enter number of elemnets: 5
// Enter element for position 1 : 1
// Enter element for position 2 : 5
// Enter element for position 3 : 0
// Enter element for position 4 : 9
// Enter element for position 5 : 6
// Biggest : 9 
// Smallest : 0