#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n], new_arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter elements for position %d : ", i);
        scanf("%d", &arr[i]);
    }

    int odd[n], even[n];
    int j = 0, k = 0, i = 0;

    for(int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
                even[j] = arr[i];
                j++;
            }
            else{
                odd[k] = arr[i];
                k++;
            }
            
    }
    int i2 = 0;
    for(int i = 0; i < j; i++){
        new_arr[i2] = even[i];
        i2++;
    }
    for(int i = 0; i < k; i++){
        new_arr[i2] = odd[i];
        i2++;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", new_arr[i]);
    }
    
    return 0;
}