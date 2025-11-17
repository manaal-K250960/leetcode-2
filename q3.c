#include <stdio.h>

void sortArray(int* arr, int size) {
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int removedup(int* num,int size){
	if(size==0)return 0;

	int k=1;

for(int i=1; i < size ; i++){
	if(num[i]!=num[i-1]){
		num[k]=num[i];
		k++;
	}
}
return k;
}

int main(){
	int n;
	printf("enter no of elements:");
	scanf("%d",&n);
	
	if(n<=0){
			printf("invalid array size");
			return 0;
	}
	int num[n];
	printf("enter %d sorted integers:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	sortArray(num, n);
	
	int k=removedup(num,n);
	
	printf("no of unique elements:%d\n",k);
	printf("array after removal:");
	for(int i=0;i<k;i++){
		printf("%d",num[i]);
	}
	printf("\n");
	return 0;
}