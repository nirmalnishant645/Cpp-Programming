//Program to arrange numbers in ascending order using Bucket Sort
#include<stdio.h>
#define SIZE 10
void bucketSort(int a[], int n){
    int i, j, k, buckets[SIZE];
    for(i = 0; i < SIZE; ++i)
	buckets[i] = 0;
    for(i = 0; i < n; ++i)
	++buckets[a[i]];
    for(i = 0, j = 0; j < SIZE; ++j)
	for(k = buckets[j]; k > 0; --k)
	    a[i++] = j;
}
int main(){
    int i, a[8], n = 8;
	printf("Please enter 8 values in the set: ");
	for(i = 0; i < n; ++i)
		scanf("%d",&a[i]);
    printf("Before sorting:\n");
    for(i = 0; i < n; ++i)
	printf("%d\t", a[i]);
    bucketSort(a, n);
    printf("\n\nAfter sorting:\n");
    for(i = 0; i < n; ++i)
	printf("%d\t", a[i]);
    getch();
    return 0;
}

