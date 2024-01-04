// selection sort for 2/3/4 number ~
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
    //Selection sort...
    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAfter swapping the array is:\n");
    display(arr,5);
    return 0;
}