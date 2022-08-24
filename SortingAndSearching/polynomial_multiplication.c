#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n;

    printf("First polynomial\n");
    printf("Enter number of coefficients: ");
    scanf("%d", &m);
    int poly1[m];

    for(int i = 0; i < m; i++){
        printf("Enter coefficients for position x^%d : ", (i+1));
        scanf("%d", &poly1[i]);
    } 

    printf("Second polynomial\n");
    printf("Enter number of coefficients: ");
    scanf("%d", &n);
    int poly2[n];

    for(int i = 0; i < n; i++){
        printf("Enter coefficients for position %d : ", (i+1));
        scanf("%d", &poly2[i]);
    }   

    int poly[m+n];
    for(int i = 0; i < (m+n); i++){
        poly[i] = 0;
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            poly[i+j] = poly[i+j] + (poly1[i]*poly2[j]);
        }
    }

    printf("Final polynomial after multiplication: \n");
    for(int i = 0; i < m+n; i++){
        if(poly[i] != 0)
            printf("%dx^%d + ", poly[i], i);
    }
    printf("0");
}