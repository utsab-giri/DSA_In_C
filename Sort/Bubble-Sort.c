// Bubble sort for 7/8 marks ~
#include<stdio.h>

void display(int arr[],int n);
void bubbleSort(int arr[],int n);
void swapping(int arr[],int j,int k);

int main(){
    printf("Enter the size of an array :\n");
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter the numbers of this array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("The unsorted array is :\n");
    display(arr,n);

    bubbleSort(arr,n);

    printf("The array after sorting is :\n");
    display(arr,n);

    return 0;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swapping(arr,j,j+1);
            }
        }
    }
}

void swapping(int arr[],int j,int k){
    int temp;
    temp=arr[j];
    arr[j]=arr[k];
    arr[k]=temp;
}