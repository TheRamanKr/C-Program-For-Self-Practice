#include<stdio.h>
int main(){
    int n;
    int arr[5];
    printf("Enter n element ( less than 100):");
    scanf("%d",n);
    
    printf("Inputs:");
    for(int i=0; i<n; i++){
        scanf("%d", arr[i]);
    }
    printf("Your Inputs is: ");
    for(int i=0; i<n; i++){
        printf("\t Given Integers is: %d", arr[i]);

    }
    return 0;
}