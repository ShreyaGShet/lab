#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i=0, j=0, k=0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(int x=0; x<n1; x++) {
        scanf("%d", &a[x]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(int x=0; x<n2; x++) {
        scanf("%d", &b[x]);
    }

    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while(i < n1) {
        c[k++] = a[i++];
    }

    while(j < n2) {
        c[k++] = b[j++];
    }

    printf("Merged array:\n");
    for(int x=0; x<k; x++) {
        printf("%d ", c[x]);
    }

    return 0;
}
