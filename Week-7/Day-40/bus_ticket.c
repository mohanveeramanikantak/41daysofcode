#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SEATS 30 // Adjust this value as needed

typedef struct {
    int seat_number;
    char passenger_name[50];
} Ticket;

Ticket tickets[MAX_SEATS];

int main() 
{
    int choice, available_seats = MAX_SEATS;
    int i=0;
    for(i = 0; i < MAX_SEATS; i++)
	{
        tickets[i].seat_number = 0;
        strcpy(tickets[i].passenger_name, "");
    }
    while (1) 
	{
        printf("\nBus Ticket System\n");
        printf("1. Book Ticket\n");
        printf("2. View Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                if (available_seats > 0) 
				{
                    int seat_number;
                    seat_number = rand() % MAX_SEATS + 1;

                    printf("Enter passenger name: ");
                    scanf(" %[^\n]", tickets[seat_number - 1].passenger_name); 

                    printf("Ticket booked successfully!\n");
                    printf("Seat number: %d\n", seat_number);
                    printf("Passenger name: %s\n", tickets[seat_number - 1].passenger_name);

                    tickets[seat_number - 1].seat_number = seat_number; 
                    available_seats--;
                } 
				else 
				{
                    printf("No seats available.\n");
                }
                break;

            case 2:
                printf("\nAvailable Seats:\n");
                for(i = 0; i < MAX_SEATS; i++)
				{
                    if (tickets[i].seat_number == 0) 
					{
                        printf("Seat %d\n", i + 1);
                    }
                }
                if (available_seats == MAX_SEATS) 
				{
                    printf("All seats are available.\n");
                }
                break;

            case 3:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

