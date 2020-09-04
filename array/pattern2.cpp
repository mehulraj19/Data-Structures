#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int ar[2*n-1][2*n-1];
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            ar[i][j] = 0;
        }
    }
    int j =0;
    for(int k=0;k<n;k++){

    
        for(int i=j;i<2*n-1-k;i++){
            ar[k][i] = n-k;
        }
        for(int i=j;i<2*n-1-k;i++){
            ar[i][k] = n-k;
        }
        for(int i=j;i<2*n-1-k;i++){
            ar[i][2*n-2-k] = n-k;
        }
        for(int i=j;i<2*n-1-k;i++){
            ar[2*n-2-k][i] = n-k;
        }
        j++;
    }
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
