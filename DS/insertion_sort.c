#include<stdio.h>
void insertionSort(int arr[], int size){
    int key, j;
   for (int i =1;i<size;i++){
       key = arr[i];
       j = i-1;
       while(j>=0 && arr[j]>key){
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main(){
    int arr[] = {43,24,55,621,52};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}