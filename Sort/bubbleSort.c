#include<stdio.h>

void swap(int arr[],int j,int k);
void bubbleSort(int arr[],int n);
void printElement(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ,",arr[i]);
    }
    printf("\n");
}
int main(){
    printf("Enter the size of this array :\n");
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array before Bubble sort is :");
    printElement(arr,n);

    bubbleSort(arr,n);

    printf("Array after Bubble sort is :");
    printElement(arr,n);
    return 0;
}

void bubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;i<n-1-j;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }
}

void swap(int arr[],int j,int k){
    int temp=arr[j];
    arr[j]=arr[k];
    arr[k]=temp;
}