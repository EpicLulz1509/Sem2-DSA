#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter elements for position %d : ", i);
        scanf("%d", &arr[i]);
    }

    int first = arr[0], second = arr[1];

    if(arr[0] > arr[1]) {
      first = arr[0];
      second  = arr[1];
    } 
   else {
      first = arr[1];
      second  = arr[0];
   }

   for(int j = 2; j < n; j++) {
      if( first < arr[j] ) {
         second = first;
         first = arr[j];
        } 
      else if( second < arr[j] )
         second =  arr[j];
   }

    printf("Second largest element : %d", second);
    return 0;
}