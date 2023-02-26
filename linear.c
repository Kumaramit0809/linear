#include <stdio.h>
int linear(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main (){
    int n;
    printf("enter the size of arrray");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter the target");
    scanf("%d",&x);
    int result=linear(arr,n,x);
    if(result==-1){
        printf("result not found");
        
    }
    else{
        printf("index found at %d",result);
    }
    return 0;
}