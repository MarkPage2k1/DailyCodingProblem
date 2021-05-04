#include <stdio.h>
#include <stdlib.h>

void TangDan(int a[], int n);

int main(){
    int n, tmp;
    int min = 1, max = 1;
    int countNumber = 0;
    printf("Nhap n = ");
    scanf("%d", &n);
    tmp = n;
    while (tmp > 0) {
        countNumber++;
        tmp /= 10;
    }
    int *a = (int*) malloc(countNumber * sizeof(int));
    int i = 0;
    tmp = n;
    while(tmp > 0) {
        a[i++] = tmp % 10;
        tmp /= 10;
    }
    TangDan(a, countNumber);
    for (int i = 0; i < countNumber; i++) {
        min = min * 10 + a[i];
        max = max * 10 + a[(countNumber - 1) - i];
    }
    printf("\nKQ = %d", max - min);
    free(a);
}
void TangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}