// Selection sort for 7/8 marks ~
#include<stdio.h>

void display(int arr[],int n);
void selectionSort(int arr[],int n);
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

    selectionSort(arr,n);

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

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swapping(arr,i,j);
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