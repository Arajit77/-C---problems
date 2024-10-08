#include <stdio.h>
int temp;
int display (int arr[], int n,int i){ 
   for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
 printf("\n");
  return 0;
} 
  int swap(int*a,int*b ,int n,int arr[]){
  temp=*a;
  *a=*b;
  *b=temp;
   // for(int i=0;i<n;i++){
   //   printf("%d\t",arr[i]);
      
   // } // ei kahner for loop ta lagbe na ... ota oi je display function ta baniyechi ota call kore dilei hobe.. yeahhh!!!! i did it ... i understand the concept now...

    return 0;
 }
int main() {
  int arr[]={12,13,14,15,16,17};
  display(arr,6,0);
swap(&arr[0],&arr[5],6,arr);
  swap(&arr[1],&arr[4],6,arr);
  swap(&arr[2],&arr[3],6,arr);
  display(arr,6,0);
  
  //printf("the updated arr[] is:%d",arr[5]);
  return 0;
}
