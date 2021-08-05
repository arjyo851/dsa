#include <stdio.h>

int main(){
    int A[] = {1,2,3,4,5};
    int len=sizeof(A)/sizeof(int);
    for( int i=0; i<len; i++ ){
        for( int j=i; j<len; j++ ){   // Now A[i..j] is the subarray
            for( int k=i; k<=j; k++ )
                printf("%d ", A[k]);
            printf("\n");
        }
    }
    return 0;
}