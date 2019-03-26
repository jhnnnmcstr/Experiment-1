// The manager of a football stadium wants you to write a program 
// that calculates the total ticket sales after each game. 
// There are four types of tickets—box, sideline, premium, and general admission. 
// After each game, data is stored in a file in the following form:
// ticketPrice numberOfTicketsSold
// ...
// Sample data are shown below:
// 250 5750
// 100 28000
// 50 35750
// 25 18750
// The first line indicates that the ticket price is $250 
// and that 5750 tickets were sold at that price. 
// Output the number of tickets sold and the total sale amount. 
// Format your output with two decimal places.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double boxticketsold, 
	 sidelineticketsold, 
     premiumticketsold, 
	 genadticketsold, 
	 totalsaleamount; 
	
 	const double boxticket = 250, 
	 sidelineticket = 100, 
	 premiumticket = 50, 
	 genadticket = 25;
 	
	cout << setprecision(2) << fixed << showpoint;
 	
	cout << "\t\t Ticket Sales" << endl;
	cout << "Enter the number of tickets sold: " << endl;
	cout << "Box Ticket ($250): ";
	cin >> boxticketsold;
	cout << "Sideline Ticket ($100): ";
	cin >> sidelineticketsold;
	cout << "Premium Ticket ($50): ";
	cin >> premiumticketsold;
	cout << "General Admission Ticket ($25): ";
	cin >> genadticketsold;
	
	totalsaleamount = (boxticket*boxticketsold) 
					+ (sidelineticket*sidelineticketsold)
					+ (premiumticket*premiumticketsold)
					+ (genadticket*genadticketsold);
	
	cout << "Total Sale Amount: $" << totalsaleamount << endl;

	return 0;	
}
