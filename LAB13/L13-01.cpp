#include <stdio.h>
#include <iostream>

int *KnapsackDP( int *w, int *v, int n, int wx ) ;

int main(){
    int n = 5 , wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int *x ;
    x = KnapsackDP( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    return 0 ;
}
int *KnapsackDP(int *w, int *v, int n, int wx) {
    int i, j;
    int dp[n + 1][wx + 1];
    int *x = new int;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= wx; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            else if (w[i - 1] <= j) {
                dp[i][j] = (v[i - 1] + dp[i - 1][j - w[i - 1]] > dp[i - 1][j]) ? 
                            v[i - 1] + dp[i - 1][j - w[i - 1]] : dp[i - 1][j];
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    i = n;
    j = wx;
    while (i > 0 && j > 0) {
        if (dp[i][j] != dp[i - 1][j]) {
            x[i - 1] = 1;
            j -= w[i - 1];
        }
        i--;
    }
    while (i > 0) {
        x[i - 1] = 0;
        i--;
    }

    return x;
}