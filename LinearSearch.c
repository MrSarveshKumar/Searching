#include<stdio.h>

int main()
{
    int arr[100];
    int n, x;

    printf("Enter the number of element in array : ");
    scanf("%d", &n);

    printf("Enter the element of array : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element which is to be searched : ");
    scanf("%d", &x);

    int flag = 0, index=-1;
    for(int i=0; i<n; i++){
        if(x == arr[i]){
            index = i;
            flag = 1;
        }
    }

    if(flag == 1){
        printf("%d is present at %d index", x, index);
    }
    else{
        printf("%d is not present in the Array");
    }

}