#include<stdio.h>
#include<string.h>

int countvowels(char string[]){
	
	int count = 0;
	
	if(string[0] == '\0'){
		return 0;
	}
	if(string[0] == 'a' || string[0] == 'A' ||string[0] == 'e' ||string[0] == 'E' ||string[0] == 'i' ||string[0] == 'I' ||
       string[0] == 'o' ||string[0] == 'O' ||string[0] == 'u' ||string[0] == 'U'){
		count++;
	}
	return count + countvowels(string+1);
}

int main(){
	
	char string[100];
	
	printf("Enter a String: ");
	fgets(string, 100, stdin);
	
	int length = strlen(string);
	int result = countvowels(string);
	
	printf("Number of Vowels: %d", result);
	
	return 0;
}
