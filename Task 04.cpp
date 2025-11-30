/*Write a program that use a structure to hold information about movies, such as title, genre, director, release year,
and rating. Write a program that allows users to add new movies, search for movies by genre, and display all movie
details.*/

#include<stdio.h>
#include<string.h>

struct movie{
	char title[100];
	char genre[100];
	char director[100];
	int releaseYear;
	float rating;
};

void display(struct movie m1){
	printf("\n");
	printf("Title of the Movie: %s\n", m1.title);
	printf("Genre of the Movie: %s\n", m1.genre);
	printf("Director of the Movie: %s\n", m1.director);
	printf("Release Year: %d\n", m1.releaseYear);
	printf("Rating of the Movie: %f", m1.rating);
}

void addmovie(struct movie *m1){
	printf("\n\n");
	
	printf("Enter the Title of the Movie: ");
	scanf(" %[^\n]", m1->title);

	printf("Enter the Genre of the Movie: ");
	scanf(" %[^\n]", m1->genre);

	printf("Enter the Director of the Movie: ");
	scanf(" %[^\n]", m1->director);
	
	printf("Enter the Release Year of the Movie: ");
	scanf("%d", &m1->releaseYear);
	
	printf("Enter the Rating of the Movie: ");
	scanf("%f", &m1->rating);
}

void search(struct movie m1[], int count){
	char gen[50];
	
	printf("\n\n");
	
	printf("Enter the Genre you want to search for: ");
	scanf(" %[^\n]", gen);
	
	printf("\n");
	printf("==== Search Results ====");
	printf("\n");
	
	for(int i=0; i<count; i++){
	
		if(strcmp(m1[i].genre, gen) == 0){
		display(m1[i]);
		}
	}
}

int main(){
	struct movie m1[100];
	int n, count=0;
	
	printf("\nEnter the Number of movies you want to add: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		addmovie(&m1[count]);
		count++;
	}
	
	printf("\n==== All Movies ====\n\n");
	for(int i=0; i<count; i++){
		display(m1[i]);
	}
	
	search(m1, count);

	return 0;
}
