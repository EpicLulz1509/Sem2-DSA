//18) WAP Program to Remove Given Word from a String

#include<stdio.h>
#include<conio.h>
int main(){
    char str[100], word[20];
    int i, j, l1, l2;
    printf("Enter the String: ");
    gets(str);
    printf("Enter a Word: ");
    gets(word);

    for(l1 = 0; str[l1] != '\0'; l1++);
    for(l2 = 0; word[l2] != '\0'; l2++);

    printf("%d %d", l1, l2);

    for(i=0; i < l1; i++){
        int temp = i;
        for(j = 0; j < l2; j++){
            if(str[i] == word[j])
                i++;
        }
        int check = i - temp;
        if(check == l2) {
            i = temp;
            for(j = i; j < (l1-l2); j++)
                str[j] = str[j+l2];
            l1 = l1 - l2;
            str[j] = '\0';
        }
    }
    printf("New String: %s", str);
    return 0;
}