#include <stdio.h>

int main(){
	int n;
	int temp;
	printf("enter value of n:");
	scanf("%d",&n);
	
		int num[n];
	
	printf("values for array:");
	for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
	}
	
		for(int i=0;i<n;i++){
				for(int j=0;j<n-1;j++){
			if(num[j]==0){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
		
			printf("values for array:");		
		for(int i=0;i<n;i++){
			printf("%d",num[i]);
		}
		return 0;
}