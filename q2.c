#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	
	printf("enter a string:");
	gets(s);
	
	int left=0;
	int right=strlen(s)-1;
	char temp;
	
	while(left<right){
		temp=s[left];
		s[left]=s[right];
		s[right]=temp;
		
		left++;
		right--;
		
	}
	printf("reversed string:%s",s);
	return 0;
	
}