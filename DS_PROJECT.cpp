/*


    4/9/2026

 





######### The Overview ########

Implement a C++ application called Airline Management System. The system operates with
multiple Flights, Offices, and Passengers.
• An Office can issue a Ticket that includes a Passenger and a Flight.
• Each Flight must maintain a list of its issued Tickets, which must be displayed in the
flight's profile.

===========================================================================================

Stucture on mohammed al-badiah 

    Modified at 4/9/2026 12:00 pm 

1) 4 Classes " booking office , passenger , ticket , flight " 
   each class has setter & getter functions , Safety functions to protect the system of invalid input 


*/



#include <iostream>
#include <string>
#include <cctype>
using namespace std ;



class Booking_Office {

    string Office_Name , Office_Location  , Office_ID ; 

    
    
    public : 


    // Safety functions for the setter function 
    bool str_check() {

     // This condonation check if the input is empty    
    if (Office_Name == "" || Office_Location == "") {
        cout << "Invalid Input, Don't make the input empty!" << endl;
        return false;
    }
    // and this one check the length
    if (Office_Name.length() < 3 || Office_Name.length() > 15 ||
        Office_Location.length() < 3 || Office_Location.length() > 15) {

        cout << "Invalid Input, Make the input between 3 - 15" << endl;
        return false;
    }


    // if every thing is ok the return value gonna be 1 "true"
    return true;
}

 

bool checkOfficeID() {

    if (Office_ID.empty()) {
        cout << "Office ID cannot be empty!" << endl;
        return false;
    }

    if (Office_ID.length() != 10) {
        cout << "Office ID must be exactly 10 digits!" << endl;
        return false;
    }

    for (char c : Office_ID) {
        if (!isdigit(c)) {
            cout << "Office ID must contain digits only!" << endl;
            return false;
        }
    }

    return true;
}


// ========== Setter Functions for Class " Booking_Office " ============















};