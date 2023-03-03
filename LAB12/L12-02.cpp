#include <stdio.h>

int *KnapsackGreedy(int *w, int *v, int n, int wx);

int main()
{
    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};
    int *x = KnapsackGreedy(w, v, n, wx);
    for (int i = 0; i < n; i++)
        printf("%d ", x[i]);
    return 0;
} // end function

int *KnapsackGreedy(int *w, int *v, int n, int wx){
    int i, weight;
    int *x = new int;
    for(i = 0 ; i < n-1 ; i++){
        x[i] = 0;
    }
    weight = 0;
    while(weight < wx && i != -1){
        if((weight + w[i]) <= wx ){
            x[i] = 1;
            weight += w[i];
        }
        i--;
    }
    return x;
}