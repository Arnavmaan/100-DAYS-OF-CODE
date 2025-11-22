// count even and odd number in the array.

void countoddeven(int arr[],int n); // function declaration
#include<stdio.h>
int main(){
    int arr[]= {1,3,5,6};
    countoddeven(arr,4); //function call
    return 0;
}
   // function definition
void countoddeven(int arr[],int n){
    int i,oddcount=0,evencount=0; // declaring parameter like odd and even count 
    for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        printf("odd number is :%d\n",arr[i]);
        oddcount++;
     }else{
        evencount++;
        printf("even number is :%d\n",arr[i]);
    }
}
    printf("total number of odd number in the array is %d\n",oddcount);
    printf("total number of even number in the array is %d\n",evencount);

    return ;
}
// we can also do whole code by declaring int function .