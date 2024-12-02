#include<stdio.h>

int main(){
	int array[100];
    int currentLength;
    int addIndex;
    int newElement;

    while(1) {
        printf("Moi ban nhap vao do dai cua mang: ");
        scanf("%d", &currentLength);

        if(currentLength < 0 || currentLength > 100) {
            printf("Do dai cua mang khong hop le \n");
        } else {
            break;
        }
    }

    for(int i = 0; i < currentLength; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    while(1) {
        printf("Moi ban nhap vao vi tri cua phan tu muon them vao mang");
        scanf("%d", &addIndex);
    
        if(addIndex < 0 || addIndex > 100) {
            printf("Vi tri phan tu muon them vao trong mang khong hop le \n");
        } else {
            break;
        }
    }
    printf("Moi ban nhap vao phan tu muon them vao trong mang: ");
    scanf("%d", &newElement);

    if(addIndex >= currentLength) {
        array[addIndex] = newElement;
        currentLength = addIndex + 1;
    } else {
        currentLength = currentLength + 1;
        for(int i = currentLength - 1; i >= addIndex; i--) {
            array[i] = array[i - 1];
        }
        array[addIndex] = newElement;
    }

    for(int i = 0; i < currentLength; i++) {
        printf("arr[%d] = %d\n", i, array[i]);
    }
    return 0; 
} 

