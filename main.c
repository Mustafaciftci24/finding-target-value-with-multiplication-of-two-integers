#include <stdio.h>
#include <math.h>
#include <limits.h>

void findTargetVal(int arr[],int tar,int *first_index,int *second_index){
    int current_multiplication,max_multiplication=INT_MAX,i,j;
    for ((i)=0;(i)<11;(i)++){
        for((j)=(i)+1;(j)<11;(j)++){
            current_multiplication = arr[i] * arr[j];
            if(abs(tar - current_multiplication) < abs(tar-max_multiplication)){
                *first_index=i;
                *second_index=j;
                max_multiplication = current_multiplication;
            }
        }
    }
}
int main() {
    int arr[]={0,1,2,3,4,5,6,7,8,9,10};
    int target,i,j;
    printf("Enter your target number");
    scanf("%d",&target);
    findTargetVal(arr,target,&i,&j);
    printf("Your target number is %d closest number is %d  with multiplication of %d and %d",target,arr[i]*arr[j],i,j);
    return 0;
}
