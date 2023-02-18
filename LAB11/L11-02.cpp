#include <stdio.h>

void mergesort(int t[], int k);
void merge(int *u, int m, int *v, int n, int *t);

int main()
{
    int data[7] = {4, 6, 1, 2, 5, 1, 8};
    int n = 7;
    mergesort(data, n);
    for (int i = 0; i < n; i++)
        printf("%d ", data[i]);
    return 0;
} // end function

void mergesort(int t[], int k){
    if (k > 1){
        int m = k / 2;
        int u[m];
        int v[k - m];
        for (int i = 0; i < m; i++){
            u[i] = t[i];
        }
        for (int i = 0; i < k - m; i++){
            v[i] = t[m + i];
        }
        mergesort(u, m);
        mergesort(v, k - m);
        merge(u, m, v, k - m, t);
    }
}
void merge(int *u, int m, int *v, int n, int *t){
    int i = 0, j = 0, k = 0;
    while (i < m && j < n){
        if (u[i] < v[j])
            t[k++] = u[i++];
        else
            t[k++] = v[j++];
    }
    while (i < m){
        t[k++] = u[i++];
    }
    while (j < n){
        t[k++] = v[j++];
    }
}
