// Insertion sort for 7/8 marks ~
#include<stdio.h>

void display(int arr[],int n);
void insertionSort(int arr[],int n);

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

    insertionSort(arr,n);

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

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while((arr[j]>key) && (j>=0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}