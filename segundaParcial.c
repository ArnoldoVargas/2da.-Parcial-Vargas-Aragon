#include <stdio.h>
#include <stdlib.h>

void bubble(int A[], unsigned int size);
void swap(int *a, int *b);

int main() {
	//unsigned int n = 10;
	 int n=0; 
	printf("Ingresa el numero de elementos:\n");
    scanf("%d", &n);
	printf("Ingresa los valores de la lista:\n");
	int list[n];
	for(int i=0;i<n;i++){
    printf("%d.- = ", i+1);
    scanf("%d", &list[i]);
   }
	
	bubble(list, n);
	printf("Los valores ordenados son:\n");
	for (int i = 0; i < n; i++) 
		printf("%d.- %d\n",i+1, list[i]);
	return 0;
}
void bubble(int A[], unsigned int size) {
	for (int i = 0; i < size - 1; i++) {
		unsigned int min = i;
		for (int j = i+1; j < size; j++) {
			if (A[j] < A[min]) 
				min = j;
		}
		if (min != i) 
			swap(&A[min], &A[i]);
	}
}
void swap(int* a, int* b) {
	int temporal = *a;
	*a = *b;
	*b = temporal;
}