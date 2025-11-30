#include<stdio.h>

void ReverseString(char string[], int n){
	if(string[n] == '\0'){
		return;
	}
	ReverseString(string, n+1);
	printf("%c", string[n]);
}

int main(){
	char string[100];
		
	printf("Enter a String: ");
	fgets(string, 100, stdin);	
	
	printf("Reversed String: ");
	ReverseString(string, 0);
	
	return 0;
}

