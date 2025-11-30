/*Create a structure to manage a sports team and its players. Each team has a name, sport, and an array of players.
Each player has a name, age, and position. Implement functions to add players, search by position, and display
team details.*/

#include<stdio.h>
#include<string.h>

struct player{
	char name[20];
	int age;
	char position[20];
};

struct team{
	char name[20];
	char sport[20];
	struct player players[20];
	int playercount;
};

void addplayer(struct team *T){
	int number, i;
	
	printf("\nEnter the Number of Players: ");
	scanf("%d", &number);
	
	printf("\n");
	
	for(i=0; i<number; i++){
		printf("\n");
		printf("Enter the Name of the Player: ");
		scanf(" %[^\n]", T->players[i].name);
		
		printf("Enter the Age of the Player: ");
		scanf(" %[^\n]", &T->players[i].age);
		
		printf("Enter the Position of the Player: ");
		scanf(" %[^\n]", T->players[i].position);
	}
	T->playercount = number;
}

void searchPos(struct team T){
	
	char pos[50];
	
	printf("\nEnter the Position to search for: ");
	scanf(" %[^\n]", &pos);
	
	for(int i=0; i<T.playercount; i++){
		
		if(strcmp(T.players[i].position,pos) == 0){
			printf("%s", T.players[i].name);
		}	
	}		
}

void display(struct team T){
	
	printf("Team Name: %s", T.name);
	printf("\nTeam Sport: %s", T.sport);
	
	for(int i=0; i<T.playercount; i++){
		
		printf("\n\nPlayer %d:\n	Player Name: %s\n	Age: %d\n	Position: %s", i+1, T.players[i].name, T.players[i].age, T.players[i].position);
	}
}
	
int main(){
	
	struct team T;
	
	printf("Enter Team Name: ");
    scanf(" %[^\n]", T.name);

    printf("Enter Sport: ");
    scanf(" %[^\n]", T.sport);
    
    addplayer(&T);
    display(T);
    searchPos(T);
	
return 0;	
}








