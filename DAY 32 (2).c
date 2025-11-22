//Merge two arrays.
#include<stdio.h>
int main(){
    int a[50] , b[50] , merge[100];
    int i=0,j=0,n1=4,n2=3;
    printf("enter the elements of a[50]: "); // input the elements in array a[].
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("array a[50] is: "); // output the elements in array a[].
    for(i=0;i<n1;i++){
        printf("%d\t",a[i]);
    }
    printf("enter the elements of b[50]: "); // input the elements in array b[].
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    printf("array b[50] is: "); // output the elements in array b[].
    for(int i=0;i<n2;i++){
        printf("%d\t",b[i]);
    }
    for(i=0;i<n1;i++){
        merge[i] = a[i];
    }
    for(j=0;j<n2;j++){
        merge[i+j] = b[j];
    }
    printf("array merge is: ");
    for(i=0;i<n1+n2;i++){
        printf("%d\t",merge[i]);
    }
    return 0;
}

