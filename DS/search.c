#include<stdio.h>
int searchLinear(int arr[],int size, int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
  return 0;
}

int binaryHelper(int arr[], int start, int end, int key){
  if(end - start <= 0){
    return 0;
  }
  int mid = (start + end)/2;
  if(arr[mid]> key){
    return binaryHelper(arr, start , mid, key);
  }
  else if(arr[mid]<key){
    return binaryHelper(arr, mid + 1, end, key);
  }
  else{
    return 1;
  }
}

int searchBinary(int arr[], int size, int key){
  int result = binaryHelper(arr, 0, size, key);
  if(result == 1){
    return 1;
  }
  return 0;
}


int main(){
  int arr[] = {1,4,6,12,13,42,222};
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("%d\n",size);
  int s4L = searchLinear(arr, size, 4);
  int s4B = searchBinary(arr, size, 4);
  int s5L = searchLinear(arr, size, 5);
  int s5B = searchBinary(arr, size, 5);
  printf("4 found L = %d 4 found B = %d 5 found L = %d 5 found B = %d",s4L,s4B,s5L,s5B);
  return 0;
}
