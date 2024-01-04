// Bubble sort for 2/3/4 number ~
#include<stdio.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
}
int main(){
    int arr[5]={3,5,8,1,4};
    printf("Unsorted array is :\n");
    display(arr,5);
    //Bubble sort...
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nAfter swapping the array is:\n");
    display(arr,5);
    return 0;
}