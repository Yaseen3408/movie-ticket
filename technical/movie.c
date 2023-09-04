#include <stdio.h>
#include <string.h>

// Structure to represent a movie ticket
struct Ticket {
    int bookingId;
    char movieName[50];
    char ticketType[10];
    float ticketPrice;
    char customerName[50];
    char phoneNumber[15];
    int seatNumber;
};

// Function to book a ticket
void bookTicket(struct Ticket tickets[], int *ticketCount) {
    struct Ticket newTicket;
    
    printf("Enter movie name: ");
    scanf("%s", newTicket.movieName);
    
    printf("Select ticket type (Gold/Silver): ");
    scanf("%s", newTicket.ticketType);
    
    // Calculate ticket price based on ticket type
    if (strcmp(newTicket.ticketType, "Gold") == 0) {
        newTicket.ticketPrice = 10.0;
    } else if (strcmp(newTicket.ticketType, "Silver") == 0) {
        newTicket.ticketPrice = 8.0;
    }
    
    printf("Enter customer name: ");
    scanf("%s", newTicket.customerName);
    
    printf("Enter phone number: ");
    scanf("%s", newTicket.phoneNumber);
    
    printf("Enter seat number: ");
    scanf("%d", &newTicket.seatNumber);
    
    // Generate a simple booking ID (this can be improved)
    newTicket.bookingId = *ticketCount + 1;
    
    tickets[*ticketCount] = newTicket;
    (*ticketCount)++;
    
    printf("Ticket booked successfully! Booking ID: %d\n", newTicket.bookingId);
}

// Function to cancel a ticket
void cancelTicket(struct Ticket tickets[], int *ticketCount) {
    int bookingId;
    printf("Enter booking ID to cancel: ");
    scanf("%d", &bookingId);
    
    for (int i = 0; i < *ticketCount; i++) {
        if (tickets[i].bookingId == bookingId) {
            printf("Ticket for %s - %s has been cancelled.\n", tickets[i].customerName, tickets[i].movieName);
            // Mark the ticket as cancelled or remove it from the array
            // Here, we'll just set the seat number to -1 to indicate cancellation
            tickets[i].seatNumber = -1;
            return;
        }
    }
    
    printf("Ticket not found for booking ID: %d\n", bookingId);
}

// Function to view a booked ticket by ticket ID
void viewTicket(struct Ticket tickets[], int ticketCount) {
    int bookingId;
    printf("Enter booking ID to view: ");
    scanf("%d", &bookingId);
    
    for (int i = 0; i < ticketCount; i++) {
        if (tickets[i].bookingId == bookingId) {
            printf("Booking ID: %d\n", tickets[i].bookingId);
            printf("Movie: %s\n", tickets[i].movieName);
            printf("Ticket Type: %s\n", tickets[i].ticketType);
            printf("Price: %.2f\n", tickets[i].ticketPrice);
            printf("Customer Name: %s\n", tickets[i].customerName);
            printf("Phone Number: %s\n", tickets[i].phoneNumber);
            printf("Seat Number: %d\n", tickets[i].seatNumber);
            return;
        }
    }
    
    printf("Ticket not found for booking ID: %d\n", bookingId);
}

// Function to authenticate as admin
int authenticateAdmin() {
    char username[50];
    char password[50];
    
    printf("Admin Login\n");
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    
    // Perform authentication (replace with your authentication logic)
    if (strcmp(username, "admin") == 0 && strcmp(password, "adminpass") == 0) {
        return 1; // Authentication successful
    }
    
    return 0; // Authentication failed
}

// Function to cancel a ticket (Admin)
void cancelTicketAdmin(struct Ticket tickets[], int *ticketCount) {
    int bookingId;
    printf("Enter booking ID to cancel: ");
    scanf("%d", &bookingId);
    
    for (int i = 0; i < *ticketCount; i++) {
        if (tickets[i].bookingId == bookingId) {
            printf("Ticket for %s - %s has been cancelled.\n", tickets[i].customerName, tickets[i].movieName);
            // Mark the ticket as cancelled or remove it from the array
            // Here, we'll just set the seat number to -1 to indicate cancellation
            tickets[i].seatNumber = -1;
            return;
        }
    }
    
    printf("Ticket not found for booking ID: %d\n", bookingId);
}

// Function to view a booked ticket by ticket ID (Admin)
void viewTicketAdmin(struct Ticket tickets[], int ticketCount) {
    int bookingId;
    printf("Enter booking ID to view: ");
    scanf("%d", &bookingId);
    
    for (int i = 0; i < ticketCount; i++) {
        if (tickets[i].bookingId == bookingId) {
            printf("Booking ID: %d\n", tickets[i].bookingId);
            printf("Movie: %s\n", tickets[i].movieName);
            printf("Ticket Type: %s\n", tickets[i].ticketType);
            printf("Price: %.2f\n", tickets[i].ticketPrice);
            printf("Customer Name: %s\n", tickets[i].customerName);
            printf("Phone Number: %s\n", tickets[i].phoneNumber);
            printf("Seat Number: %d\n", tickets[i].seatNumber);
            return;
        }
    }
    
    printf("Ticket not found for booking ID: %d\n", bookingId);
}

int main() {
    struct Ticket tickets[100]; // Array to store booked tickets
    int ticketCount = 0; // Counter to keep track of booked tickets
    
    int choice;
    int isAdmin = 0;
    
    // Admin authentication loop
    while (1) {
        printf("\nUser Type Selection:\n");
        printf("1. User\n");
        printf("2. Admin\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            isAdmin = 0;
            break;
        } else if (choice == 2) {
            if (authenticateAdmin()) {
                isAdmin = 1;
                break;
            } else {
                printf("Admin authentication failed. Try again.\n");
            }
        } else if (choice == 3) {
            printf("Exiting...\n");
            return 0;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
    
    do {
        if (isAdmin) {
            printf("\nAdmin Menu\n");
            printf("1. View All Booked Tickets\n");
            printf("2. Cancel a Ticket\n");
            printf("3. View a Booked Ticket\n");
            printf("4. Exit\n");
        } else {
            printf("\nUser Menu\n");
            printf("1. Book a Ticket\n");
            printf("2. Cancel a Ticket\n");
            printf("3. View a Booked Ticket\n");
            printf("4. Exit\n");
        }
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (isAdmin) {
                    // Implement admin functionality to view all booked tickets
                    printf("Admin functionality not implemented in this simplified code.\n");
                } else {
                    bookTicket(tickets, &ticketCount);
                }
                break;
            case 2:
                if (isAdmin) {
                    cancelTicketAdmin(tickets, &ticketCount); // Admin cancel function
                } else {
                    cancelTicket(tickets, &ticketCount); // User cancel function
                }
                break;
            case 3:
                if (isAdmin) {
                    viewTicketAdmin(tickets, ticketCount); // Admin view function
                } else {
                    viewTicket(tickets, ticketCount); // User view function
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}
