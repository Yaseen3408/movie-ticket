# movie-ticket

# Movie Ticket Booking System Documentation

## Table of Contents
1. Introduction
2. Features
3. Code Overview
4. Functions
    - `bookTicket`
    - `cancelTicket`
    - `viewTicket`
    - `authenticateAdmin`
    - `cancelTicketAdmin`
    - `viewTicketAdmin`
5. User and Admin Interaction
6. Compilation and Execution
7. Future Improvements
8. Conclusion

## 1. Introduction
The Movie Ticket Booking System is a simple console-based application that allows users to book movie tickets. It supports both user and admin functionalities. Users can book tickets, cancel tickets, and view their booked tickets. Admins have additional features to view all booked tickets, cancel tickets, and view specific booked tickets.

## 2. Features
- User Registration and Login
- Booking Tickets
- Cancelling Tickets
- Viewing Booked Tickets
- Authentication for Admins
- Admin Functions (View All Tickets, Cancel Tickets, View Specific Tickets)

## 3. Code Overview
The code is written in C and uses a simple array of structures to store ticket information. It provides a menu-driven interface for both users and admins to interact with the system.

## 4. Functions
### `bookTicket`
- Allows users to book movie tickets.
- Asks for movie name, ticket type, customer name, phone number, and seat number.
- Calculates the ticket price based on the ticket type.
- Generates a booking ID for the ticket.

### `cancelTicket`
- Allows users to cancel their booked tickets.
- Asks for the booking ID of the ticket to be canceled.
- Marks the ticket as canceled or removes it from the array.

### `viewTicket`
- Allows users to view their booked tickets.
- Asks for the booking ID of the ticket to be viewed.
- Displays the ticket details.

### `authenticateAdmin`
- Authenticates admin users.
- Asks for a username and password for admin login.
- Returns 1 for successful authentication, 0 for failure.

### `cancelTicketAdmin`
- Allows admins to cancel any booked tickets.
- Asks for the booking ID of the ticket to be canceled.
- Marks the ticket as canceled or removes it from the array.

### `viewTicketAdmin`
- Allows admins to view any booked ticket.
- Asks for the booking ID of the ticket to be viewed.
- Displays the ticket details.

## 5. User and Admin Interaction
- Users can choose to log in as either a regular user or an admin.
- Regular users can book, cancel, and view their tickets.
- Admins have access to additional features for managing tickets.

## 6. Compilation and Execution
- Compile the code using a C compiler.
- Execute the program to run the Movie Ticket Booking System.
- Follow the on-screen instructions to navigate and use the system.

## 7. Future Improvements
- Implement user and admin registration.
- Store data in a database for persistence.
- Add more robust error handling and validation.
- Improve the admin functionality by providing search and filtering options.

## 8. Conclusion
The Movie Ticket Booking System is a basic example of a ticket booking application. It allows users to interact with the system by booking and managing their movie tickets while providing admin functionality for ticket management.

Please note that this documentation outline is quite high-level, and you can expand it with more details, explanations, and formatting to create comprehensive documentation for your project.
