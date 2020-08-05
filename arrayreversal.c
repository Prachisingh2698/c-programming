#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,sum=0;
    scanf("%d",&n);
    int ar[n];
    int *p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        sum=sum+*(p+i);
    } 
    printf("%d",sum); 
    return 0;
}
