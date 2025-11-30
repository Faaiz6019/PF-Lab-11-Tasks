/*Write a program that uses structures to manage flight information, including flight number, departure city,
destination city, date, and available seats. Create functionalities to book a seat and display flight details*/

#include<stdio.h>

struct flightInfo{
	int flightnumber;
	char depcity[100];
	char destcity[100];
	char date[100];
	int seatsavb;
};

void display(struct flightInfo f1){
	printf("Flight Number: %d\n", f1.flightnumber);
	printf("Departure City: %s\n", f1.depcity);
	printf("Destination City: %s\n", f1.destcity);
	printf("Date: %s\n", f1.date);
	printf("Seats Available: %d\n", f1.seatsavb);
}

void bookSeat(struct flightInfo *f1){
	int n;
	printf("Enter Number of seats to book: ");
	scanf("%d", &n);
	if(f1->seatsavb >= 0){
		f1->seatsavb = f1->seatsavb - n;
	}
	printf("Seat Booked.\n");
	printf("Remaining Seats: %d\n", f1->seatsavb);
}


int main(){
	struct flightInfo f1 = {101, "Venice", "Hanoi", "25-11-2025", 50}; 
	display(f1);
	bookSeat(&f1);
	printf("\n\n");
	struct flightInfo f2 = {201, "Jakarta", "Addisababa", "25-11-2026", 60}; 	
	display(f2);
	bookSeat(&f2);
	return 0;
}










